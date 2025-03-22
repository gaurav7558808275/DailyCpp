#include"stdio.h"
#include "stdlib.h"

// some linked list

struct node{
    
    int data;
    struct node * next;

};
int printLinkedList(struct node * p)
{
    while(p != NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
    return 0;
}
int main()
{

    struct node * head; 
    struct node * One = NULL;
    struct node * Two = NULL;
    struct node * Three = NULL;

    One = malloc(sizeof(struct node));
    Two = malloc(sizeof(struct node));
    Three = malloc(sizeof(struct node));

    One->data = 1;
    Two->data = 2;
    Three->data = 3;

    head = One;
    One->next = Two;
    Two->next = Three;
    Three->next = NULL;

    
    printLinkedList(head);

    free(One);
    free(Two);
    free(Three);

}


