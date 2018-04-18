#include jsmn.h



int usercount=1;
struct Node
{
  char username[100];
  char message[255];
  int count, bitCount;
  struct Node *next;
};


struct List
{
struct Node *start;
}*list;

struct List Createlist()
{
struct List *list =(struct List *)malloc(sizeof(struct List));
if (list==NULL)
  { printf("Memory allocation failed\n");
  }
list->start=NULL;
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
    newnode->count = usercount;
    newnode->next = NULL;
    usercount++;
};



void traverse(struct List *list)
{
struct Node *temp=(struct Node *)malloc(sizeof(Node));
  temp=list->start;
  while (temp!=NULL)
  {
  printf("username:%s message:%s \n",temp->username,temp-=>message);
  }

printf("chat room display completed\n");
}

int main()
{
    char username[64];
    char message[100];
    int choice, count;
    struct List *list;

    while (choice != 6)
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

    while (choice < 1 || choice > 6)
    {
        printf("Value out of range (%d). Try Again.", choice);
        printf("Your choice (1-5): \n");
        scanf(" %d", &choice);
    }
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
    else if (3 == choice)       /* Sorting */
    {
        choice = 0;
        while(choice != 3)
        {
            printf("╔════════════════════════════╗\n");
            printf("║           |MENU|           ║\n");
            printf("║━━━━━━━━━━━━━━━━━━━━━━━━━━━━║\n");
            printf("║ 1. Bubble Sort             ║\n");
            printf("║ 2. Insertion Sort          ║\n");
            printf("║ 3. Exit                    ║\n");
            printf("╚════════════════════════════╝\n \n");
            printf("Enter choice: \n");
            scanf("%d", &choice);

            while (choice < 1 || choice > 3)
            {
                printf("Value out of range (%d). Try Again.", choice);
                printf("Your choice (1-3): \n");
                scanf(" %d", &choice);
            }
            if (1 == choice)
            {
            }
            else if (2 == choice)
            {
            }
            else if (3 == choice)
            {
                break;
            }
        }

    }
    else if (4 == choice)       /* Searching */
    {
        printf(" ┏(-_-)┛┗(-_-)┓┗(-_-)┛┏(-_-)┓ \n");

        choice = 0;
        while(choice != 3)
        {
            printf("╔════════════════════════════╗\n");
            printf("║           |MENU|           ║\n");
            printf("║━━━━━━━━━━━━━━━━━━━━━━━━━━━━║\n");
            printf("║ 1. Linear Search           ║\n");
            printf("║ 2. Binary Search           ║\n");
            printf("║ 3. Exit                    ║\n");
            printf("╚════════════════════════════╝\n \n");
            printf("Enter choice: \n");
            scanf("%d", &choice);

            while (choice < 1 || choice > 3)
            {
                printf("Value out of range (%d). Try Again.", choice);
                printf("Your choice (1-3): \n");
                scanf(" %d", &choice);
            }
            if (1 == choice)
            {
            }
            else if (2 == choice)
            {
            }
            else if (3 == choice)
            {
                break;
            }
        }
    }
    else if (5 == choice)
    {
        printf(" ( ͡° ͜ʖ ͡°) \n");
        list = CreateList();
        printf("List has been created \n");
    }
    else if (6 == choice)
    {
        printf("Yeeeeeeet! \n\n");
        return 0;
    }
    }
}
