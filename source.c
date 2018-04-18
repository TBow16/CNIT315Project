#include jsmn.h



int usercount=1;
struct Node
{
  char username[100];
  char message[255];
  int count;
  struct Node *next;
}user;


struct List
{
struct Node *start;
}*list;

struct List *CreateList()
{
    struct List *newlist = (struct List *)malloc(sizeof(struct List));
    if (NULL == newlist) 
    { 
        printf("Not enough memory left on the system. ;A;\n");
    }
    newlist ->start = NULL;

    return newlist;
}
struct Node *CreateNode(char username[], char message[], int count)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    if (NULL == newnode) 
    { 
        printf("Not enough memory left on the system. ;A;\n");
    }
    strcpy(newnode->username, username);
    strcpy(newnode->message, message);
    newnode->count = count;
    newnode->next = NULL;
    usercount++;
};



void Traverse(struct List *list)
{
    struct Node *temp = list->start; 

    if (temp != NULL)
    {
        while (temp != NULL)
        {
            printf("Username: %s \n", temp->username);
            printf("Message:  %s \n", temp->message);
            temp = temp->next;
        }
    }
    else
    {
        printf("No users interacting \n");
    }
    printf("Chat room display completed \n" \n);
}


int main()
{ 
  char username[64];
  char message[100];
  int choice, count;
  char link;
  
  struct List *list;
 
    printf("Enter Twitch Link: ");
    scanf(" %s", link);
    
    while (choice != 5)
    {
      printf("╔════════════════════════════╗\n");
      printf("║           |MENU|           ║\n");
      printf("║━━━━━━━━━━━━━━━━━━━━━━━━━━━━║\n");
      printf("║ 1. Execute                 ║\n");
      printf("║ 2. Traverse                ║\n");
      printf("║ 3. Sort                    ║\n");
      printf("║ 4. Search                  ║\n");
      printf("║ 5. Exit                    ║\n");
      printf("╚════════════════════════════╝\n \n");
      
      printf("Enter choice: \n");
      scanf("%d", &choice);
      
      if (1 == choice)
      {
            if(list == NULL)
            {
                printf("Error: Create a List \n \n");
            }
            else
            {
                printf("Enter username: \n");
                scanf("%s", username);

                printf("Enter messge: \n");
                scanf("%s", message);

                printf("Enter Age: \n");
                scanf("%d", &count);
                

                InsertFront(list, username, message, user.count); 
            }
      }
      else if (2 == choice)
      {
        Traverse(list);
      }
      else if (3 == choice)
      {
        printf(" ( ͡° ͜ʖ ͡°) \n");
        list = CreateList();
        printf("List has been created \n");
      }
      else if (4 == choice)
      {
        printf(" ┏(-_-)┛┗(-_-)┓┗(-_-)┛┏(-_-)┓ \n");
      }
      else if (5 == choice)
      {
        return 0;
      }
    }
  
}
