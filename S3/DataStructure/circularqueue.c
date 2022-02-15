#include <stdio.h>
#define SIZE 5

int list[SIZE];
int front = -1, rear = -1;

int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
  return 0;
}

int isEmpty() {
  if (front == -1) return 1;
  return 0;
}

void enqueue(int element) {
  if (isFull())
    printf("\n Queue is full!!");
  else {
    if (front == -1){
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    list[rear] = element;
  }
}

void dequeue() {
  int element;
  if (isEmpty()) {
    printf("\n Queue is empty !!");
  } 
  else {
    element = list[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    else {
      front = (front + 1) % SIZE;
    }
  }
}

void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue");
  else {
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", list[i]);
    }
    else
    {
        for (int i = front; i < SIZE; i++)
            printf("%d ", list[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("%d ", list[i]);
    }
  }
}

int main() {
    int a, n=2, element ;
    while(n>1){
        printf("\nchoose from following options\n 1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
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
            display();
            break;

        case 4:
            n=0;

        default:
            break;
        }
    }
    return 0;
}