#include <stdio.h>
int dq[25];
#define LENGTH 5
int front = -1, rear = -1, item;
void insertfront(int item)
{
    if ((front == 0 && rear == LENGTH) || (front == rear + 1))
        printf("Queus is full\n");
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0)
            front = LENGTH - 1;
        else
            front = front - 1;
        dq[front] = item;
    }
}
void insertrear(int item)
{
    if (((front == 0) && (rear == LENGTH - 1)) || (front == rear + 1))
        printf("Queue is full\n");
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == LENGTH - 1)
            rear = 0;
        else
            rear = rear + 1;
        dq[rear] = item;
    }
}
int deletefront()
{
    if (front == -1)
    {
        printf("Queue is qmpty\n");
        item = -1;
    }
    else
    {
        item = dq[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == LENGTH-1)
            front = 0;
        else
            front = front + 1;
    }
    return (item);
}
int deleterear()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        item = -1;
    }
    else
    {
        item = dq[rear];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
            rear = LENGTH - 1;
        else
            rear = rear - 1;
    }
    return (item);
}
void display()
{
    int i;
    i = front;
    while (i != rear)
    {
        printf("%d ", dq[i]);
        if (i == LENGTH - 1)
            i = 0;
        else
            i = (i % LENGTH) + 1;
    }
    printf("%d ", dq[i]);
}
void main()
{
    int choice, item, exitflag = 0;
    while (1)
    {
        printf("\nchoice 1:Insert front\n");
        printf("\nchoice 2:Insert rear\n");
        printf("\nchoice 3:Delete front\n");
        printf("\nchoice 4:Delete rear\n");
        printf("\nchoice 5:exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element:\n");
            scanf("%d", &item);
            insertfront(item);
            display();
            break;
        case 2:
            printf("\nEnter the element:\n");
            scanf("%d", &item);
            insertrear(item);
            display();
            break;
        case 3:
            item = deletefront();
            printf("\nremoved element is:%d\n", item);
            display();
            break;
        case 4:
            item = deleterear();
            printf("\nremoved element is:%d\n", item);
            display();
            break;
        case 5:
            exitflag = 1;
            break;
        default:
            break;
        }
        if (exitflag == 1)
            break;
    }
}