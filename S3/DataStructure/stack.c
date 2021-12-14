//incomplete - work still in progress
#include<stdio.h>
int arr[10], top=0,element ;
void push(){
    if(top+1<10){
        arr[top] = element;
        top+=1;
    }
    else{
        printf("overflow");
    }
}
void pop(int arr[10], int top, int element){
    if(top>=0){
        element = arr[top-1];
    }
}

void display(int arr[10]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n=2;
    int a;
    while(n>1){
        printf("choose from following options\n 1.push\n 2.pop\n 3.display\n 4.exit");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf("enter the element to push");
            scanf("%d",&element);
            push();
            break;

        case 2:
            pop(arr, top, element);
            break;

        case 3:
            display(arr);
            break;

        case 4:
            n=0;

        default:
            break;
        }
    }
    return 0;
}