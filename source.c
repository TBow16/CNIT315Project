#include jsmn.h

struct Node twitchInfo
{
  char username[100];
  char message[255];
  int count, bitCount;
  struct Node *next;
};

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
};

int main()
{
  int choice;
  char link;
  
 
    printf("Enter Twitch Link: ");
    scanf(" %s", link);
    
    while (choice != )
    {
      
    }
  
}
