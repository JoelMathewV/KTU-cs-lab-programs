#include<stdio.h>
int arr[10], top=-1,element ;
void push(){
    if(top+1<10){
        arr[top+1] = element;
        top+=1;
    }
    else{
        printf("overflow\n");
    }
}
void pop(){
    if(top>=0){
        element = arr[top-1];
        top--;
    }
    else{
        printf("stack underflow\n");
    }
}

void display(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n=2;
    int a;
    while(n>1){
        printf("choose from following options\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf("enter the element to push\n");
            scanf("%d",&element);
            push();
            break;

        case 2:
            pop();
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