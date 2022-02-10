// Write a program to reverse the content of queue using stack
#include<stdio.h>
int f = -1,r = -1;
int q[50];
//Enqueue for inserting data
void enqueue(int data,int l)
{
    if(r==l-1){
        printf("Queue is full");
    }
    else if((f==-1)&&(r==-1)){
        f = r = 0;
        q[r] = data;
    }
    else
    {
        r++;
        q[r] = data;    
    }
}
//Print function for printing the data
void print()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("\n%d",q[i]);
    }
}
//reverse function for reversing the data
void reverse()
{
    int i,j,t;
    for(i=f,j=r;i<j;i++,j--){
        t = q[i];
        q[i] = q[j];
        q[j] = t;
    }
}
int main()
{
    int n,i=0,t;
    printf("Enter the size of Queue");
    scanf("%d",&n);
    printf("\nEnter the data for Queue");
    while(i<n){
        scanf("%d",&t);
        enqueue(t,n);
        i++;
    }
    printf("\nQueue which you have entered:-");
    print();
    reverse();
    printf("\nQueue after reversing:-");
    print();
    return 0;
}