// Implement a Queue using linked list with the operations:
// Insert an elements to the queue. Delete an elements from the queue. Display the queue after each operation

#include <stdio.h>
#include <stdlib.h>
 
struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node
{
    int data;
    struct Node *next;
};
 
void display(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
 
void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
 
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
 
int main()
{
    int element;
    int n=2;
    int a;
    while(n>1){
        printf("choose from following options\n 1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf("enter the element to enqueue\n");
            scanf("%d",&element);
            enqueue(element);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display(f);
            break;

        case 4:
            n=0;

        default:
            break;
        }
    }
    return 0;
}
