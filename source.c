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
  int choice;
  char link;
  
 
    printf("Enter Twitch Link: ");
    scanf(" %s", link);
    
    while (choice != 5)
    {
      printf("#Menu \n");
      prinft("1. Execute \n");
      printf("2. Traverse \n");
      printf("3. Sort \n");
      printf("4. Search \n");
      printf("5. Exit \n");
      
      scanf(" %d", choice);
      
      if (1 == choice)
      {
        
      }
      else if (2 == choice)
      {
      }
      else if (3 == choice)
      {
      }
      else if (4 == choice)
      {
      }
      else if (5 == choice)
      {
      }
    }
  
}
