#include"stdio.h"
#include "stdlib.h"


struct node{
    
    int data;
    struct node * next;

};

struct node * CreateLinkedList(int n)
{
    struct node * temp = NULL;
    struct node * head = NULL;
    struct node * p = NULL;
    
    for(int i=0 ;i <n ;i ++)
    {
         temp = malloc(sizeof(struct node));
         printf("enter the value");
         scanf("%d", &(temp->data));
         temp->next = NULL;

         if(head == NULL)
         {
            head = temp;
         }
         else
         {
            p = head;
            while(p->next != NULL)
            {
                p = p->next;   
            }
            p->next = temp;
         }
    }

    return head;
}


int printLinkedList(struct node * p)
{
    printf("HEAD-->");
    while(p != NULL)
    {
        printf("%d-->",p->data);
        p = p->next;
    }
    printf("NULL");
    return 0;
}
int main()
{
    int n= 5;
    
    struct node * HEAD = NULL;
    HEAD = CreateLinkedList(n);    
    printLinkedList(HEAD);

}


