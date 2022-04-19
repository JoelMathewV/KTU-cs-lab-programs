//implementation of operations on linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node* header = NULL;
void display(){
    struct node* temp;
    if(header==NULL)
        printf("Empty");
    else{
        temp = header;
        while (temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->link;
        }
        
    }
}
void insertAtBeg(){
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("Enter number ");
    scanf("%d",&data);
    temp->data=data;
    temp->link=header;
    header = temp;
}
void insertAtEnd(){
    int data;
    struct node*temp,*ptr;
    temp = malloc(sizeof(struct node));
    printf("Enter the number");
    scanf("%d",&data);
    temp->link=NULL;
    temp->data= data;
    ptr = header;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;

}
void insertAtPos(){
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));
	printf("\nEnter position and data ");
	scanf("%d %d", &pos, &data);
	temp = header;
	newnode->data = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}
void deleteBeg(){
	struct node* temp;
	if (header == NULL)
		printf("\nEmpty");
	else {
		temp = header;
		header = header->link;
	}
}
void deleteEnd(){
	struct node *temp, *prevnode;
	if (header == NULL)
		printf("\nEmpty");
	else {
		temp = header;
		while (temp->link != 0) {
			prevnode = temp;
			temp = temp->link;
		}
		prevnode->link = 0;
	}
}
void deletePos(){
	struct node *temp, *position;
	int i = 1, pos;
	if (header == NULL)
		printf("\nEmpty");
	else {
		printf("\nEnter pos");
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = header;
		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}
		position = temp->link;
		temp->link = position->link;
	}
}
int main()
{
int choice;
char ch;
	while (1) {
        printf("1.Display\n2.Insert at beginning\n3.insert at end\n4.insert at specific pos\n5.delelte at beginning\n6.delete at end\n7.delete at specifc pos\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			display();
			break;
		case 2:
			insertAtBeg();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPos();
			break;
		case 5:
			deleteBeg();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePos();
			break;
		default:
			printf("Incorrect Choice\n");
		}
		printf("\nDo you want to continue y/n ");
		scanf(" %ch",&ch);
		if(ch == 'n'){
			break;
		}
    }
	return 0;
}
