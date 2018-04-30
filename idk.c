#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*function prototypes*/
struct Node;
struct List;
struct List *CreateList();
void Traverse(struct List *list);
void bubbleSort(struct List *list);
void swap(struct Node *a, struct Node *b);
void insertfront(struct List *list, char username[], char message[]);
void linearsearch(struct List *list, char user[]);

int main(){
	
	/*varible declaration*/
	int menu1;
	int menu2;
	char channel [25];
	char user [25];
	char mess[255];
	struct List *list = CreateList();

	/*Main Menu*/
	do{
		printf("╔════════════════════════════╗\n");
		printf("║           |MENU|           ║\n");
		printf("║━━━━━━━━━━━━━━━━━━━━━━━━━━━━║\n");
		printf("║ 1. Execute                 ║\n");
		printf("║ 2. Traverse                ║\n");
		printf("║ 3. Sort                    ║\n");
		printf("║ 4. Search                  ║\n");
		printf("║ 5. Exit                    ║\n");
		printf("╚════════════════════════════╝\n \n");

		/*Scans for selected option and runs it*/
		printf("Enter choice: ");
		scanf("%d", &menu1);

		switch(menu1){

			/*Select Twitch Channel*/
			case 1:
				printf("Enter Channel Name: ");
				scanf("%s", channel);
				printf("\nConnecting to %s \n", channel);
				printf("\nAPI not functioning \n\n");

				do{
					printf("╔════════════════════════════╗\n");
					printf("║     |Manual Insertion|     ║\n");
					printf("║━━━━━━━━━━━━━━━━━━━━━━━━━━━━║\n");
					printf("║ 1. Yes                     ║\n");
					printf("║ 2. No                      ║\n");
					printf("╚════════════════════════════╝\n \n");
					printf("Enter choice(1-2): ");
					scanf("%d", &menu2);

					switch(menu2){
						/*Manual Data Insertion*/
						case 1:
							printf("Enter a username: ");
							scanf("%s", user);
							printf("Enter message: ");
							scanf("%s", mess);
							insertfront(list, user, mess);
						default:
							break;
					}
				} while(menu2 != 2);
				break;
			/*Print the list*/
			case 2:
				if(list != NULL){
					Traverse(list);
				} else {
					printf("The list does not exist. \n");
				}
				break;
			/*Sort Funtions*/
			case 3:
				/*Sort Menu*/
				do{
					printf("╔════════════════════════════╗\n");
					printf("║           |MENU|           ║\n");
					printf("║━━━━━━━━━━━━━━━━━━━━━━━━━━━━║\n");
					printf("║ 1. Bubble Sort             ║\n");
					printf("║ 2. Insertion Sort          ║\n");
					printf("║ 3. Exit                    ║\n");
					printf("╚════════════════════════════╝\n \n");
					printf("Enter choice: ");
					scanf("%d", &menu2);

					switch(menu2){
						/*Bubble Sort*/
						case 1:
							if(list != NULL){
								bubbleSort(list);
							} else {
								printf("The list does not exist. \n");
							}
							break;
						/*Binary Sort*/
						case 2:
							printf("\nThis feature will be added at a later date \n");
							break;
						default:
							break;
					}
				} while(menu2 != 3);
				break;
			/*Search Function*/
			case 4:
				/*Search Menu*/
				do{
					printf("╔════════════════════════════╗\n");
					printf("║           |MENU|           ║\n");
					printf("║━━━━━━━━━━━━━━━━━━━━━━━━━━━━║\n");
					printf("║ 1. Linear Search           ║\n");
					printf("║ 2. Binary Search           ║\n");
					printf("║ 3. Exit                    ║\n");
					printf("╚════════════════════════════╝\n \n");
					printf("Enter choice: \n");
					scanf("%d", &menu2);

					switch(menu2){
						/*Linear Search*/
						case 1:
							if(list != NULL){
								printf("\n Enter username\n");
								scanf("%s", user);
								linearsearch(list, user);
							} else {
								printf("The list does not exist. \n");
							}
							break;
						/*Binary Search*/
						case 2:
							printf("\nThis feature will be added at a later date \n");
							break;
						default:
							break;
					}
				} while(menu2 != 3);
			default:
				break;
		}
	} while(menu1 != 5);

	return 0;
}

/*Node Structure*/
struct Node{

	char username[25];
	char message[255];
	struct Node *next;
};

/*List Structure*/
struct List{

	struct Node *start;
};

/*Create List Function*/
struct List *CreateList(){

	struct List *newlist = (struct List *)malloc(sizeof(struct List));
	if (NULL == newlist){
		printf("Not enough memory left on the system. ;A;\n");
	}

	newlist ->start = NULL;

	return newlist;
}

/*Create Node Function*/
struct Node *CreateNode(char username[], char message[]){

	struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
	if (NULL == newnode){
		printf("Not enough memory left on the system. ;A;\n");
	}

	strcpy(newnode->username, username);
	strcpy(newnode->message, message);
	newnode->next = NULL;

	return newnode;
}

/*Traverse Function*/
void Traverse(struct List *list){

	struct Node *temp = list->start;

	if (temp != NULL){
		while (temp != NULL){
			printf("Username: %s \n", temp->username);
			printf("Message:  %s \n", temp->message);
			temp = temp->next;
		}
	}
	else{
	printf("No users interacting \n");
	}

	printf("Chat room display completed \n");
}

/*Bubble Sort Function*/
void bubbleSort(struct List *list){

	int swapped;
	struct Node *ptr1;
	struct Node *lptr = NULL;
	ptr1 = list->start;

	do{

		swapped = 0;

		while (ptr1->next != lptr){

			if (ptr1->username > ptr1->next->username){
				swap(ptr1, ptr1->next);
				swapped = 1;
			}

			ptr1 = ptr1->next;
		}

		lptr = ptr1;
	}while (swapped);
}

/*Swaps the Data Stored in a Node*/
void swap(struct Node *a, struct Node *b){

	char temp1[25];
	char temp2[255];
	strcpy(temp1, a->username);
	strcpy(temp2, a->message);
	strcpy(a->username, b->username);
	strcpy(a->message, b->username);
	strcpy(b->username, temp1);
	strcpy(b->message, temp2);
}

void insertfront(struct List *list, char username[], char message[]){
	
	struct Node *newnode = CreateNode(username, message);
	
	newnode->next = list->start;
	list->start = newnode;
}



void linearsearch(struct List *list, char user[]){

	struct Node *temp = (struct Node *)malloc(sizeof(struct Node)); 
	temp=list->start;
	while (temp!=NULL){
		if (strcmp(user,temp->username)==0){
			printf("\nusername:%s message:%s\n",temp->username,temp->message);
		}
	temp=temp->next;
	}
	printf("\nSearch Complete\n");
}



