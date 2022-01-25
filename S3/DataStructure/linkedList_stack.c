#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void push();
void pop();
void display();
struct node *header;
int main(){
int op;
char ch;
while (1)
{
    printf("1.PUSH\n2.POP\n3.DISPLAY");
    scanf("%d",&op);
    switch (op)
    {
        case 1 : push();
                 break;
        case 2 : pop();
                 break;
        case 3 : display();
                 break; 
        default: printf("Error");
                 break;
    }
	printf("\nDo you want to continue y/n ");
	scanf(" %ch",&ch);
	if(ch == 'n'){
		break;
	}
}
return 0;
}
void push(){
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    if(temp==NULL){
        printf("memory underflow no insertion");
    }
    else{
        printf("Enter the Number");
        scanf("%d",&data);
        temp->data=data;
        temp->link=header;
        header=temp;
    }

}
void pop(){
    if(header==NULL){
        printf("Underflow");
    }
    else{
        printf("%d popped",header->data);
        header=header->link;
    }
}
void display(){
    struct node *temp;
    temp=header;
    if (temp==NULL)
    {
        printf("Empty");
    }
    else{
        while (temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->link;
        }
        
    }
    
}