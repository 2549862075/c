#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    Node *lchild, *rchild;
}Node;
Node *build_list(int a[], Node *L)
{
int i=1;
while(i<20){
    
}
return L;
}

int main()
{
    int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    Node* L=(Node *) malloc(sizeof(Node)*1);
    L->data=a[0];
    L->lchild=L->rchild=NULL;
    build_list(a,L);
    return 0;
} 
