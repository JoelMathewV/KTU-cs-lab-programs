#include<stdio.h>
int arr[10], front=-1, rear=-1, element;
int size(){
    return rear-front+1;
}
void enqueue(){
    if(size()<10){
        arr[rear+1]=element;
        rear++;
    }
    else{
        printf("overflow");
    }
}
void dequeue(){
    if(size()==0){
        printf("underflow");
    }
    else{
        front++;
    }
}

void display(){
    int i;
    for(i=front+1;i<=rear;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
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
            enqueue();
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