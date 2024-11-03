#include <stdio.h>
#include <stdlib.h>
#define max_size 20
typedef struct Node
{
     int data;
     struct Node *next;
} Node, LinkList;

int main()
{
     LinkList *list;
     list = (LinkList *)malloc(sizeof(LinkList));
     list->next = NULL;
     list->data=0;
     int x;
     printf("请输入");
     scanf("%d", &x);
     while (x != 99)
     {
          Node *node;
          node = (Node *)malloc(sizeof(Node));
          node->data = x;
          node->next = list;
          list = node;
          scanf("%d", &x);
     }
     LinkList *a = list;
     while (a->next != NULL)
     {
          printf("%d\n", a->data);
          a = a->next;
     }
}
