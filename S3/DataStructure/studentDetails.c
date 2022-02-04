// The details of students(number, name, total-mark) are to be stored in a linked list.Write functions for the following operations: Insert Delete Search Display the resultant list after every operation
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int number;
    char name[30];
    int t_mark;
    struct node *link;
};
struct node* header = NULL;
void display(){
    struct node*temp;
    if(header==NULL)
        printf("Empty");
    else{
        temp = header;
        while (temp!=NULL)
        {
            printf("Roll no :%d\t Name : %s\t Total mark: %d \n",temp->number,temp->name,temp->t_mark);
            temp = temp->link;
        }   
    }
}
void add(){
    int no,mark;
    char s[30];
    struct node*temp,*ptr;
    temp = malloc(sizeof(struct node));
    printf("Enter the Roll No");
    scanf("%d",&no);
    printf("Enter Name");
    scanf("%s",s);
    printf("Enter Total mark");
    scanf("%d",&mark);
    temp->number=no;
    strcpy(temp->name,s);
    temp->t_mark=mark;
    temp->link=NULL;
    ptr = header;
    if(ptr==NULL){
    header = temp;    
    }
    else{
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
    }
}

void delete(){
	struct node *temp, *position;
	int i=1,pos=1,no;
	if (header == NULL)
		printf("\nEmpty");
	else {
		printf("\nEnter Roll No");
		scanf("%d", &no);

		position = malloc(sizeof(struct node));
        temp = malloc(sizeof(struct node));
		temp = header;
		while (temp->number!=no) {
			pos++;
            temp=temp->link;
		}
        temp= header;
        while (i < pos-1) {
			temp = temp->link;
			i++;
		}
		position = temp->link;
		temp->link = position->link;
	}
}
void search(){
    struct node *temp;
    int no,flag=0;
    temp = malloc(sizeof(struct node));
    if(header==NULL){
        printf("Empty");
    }else{
        printf("Enter Roll no to search");
        scanf("%d",&no);
        temp = header;
        do
        {
            if(temp->number==no){
                flag =1;
                break;
            }
            temp = temp->link;
            
        }while(temp!=NULL);
        if (flag==1)
        {
            printf("Data found");
        }
        else{
            printf("Data not found");
        }
    }       
}
int main()
{
int choice;
char ch;
	while (1) {
        printf("1.Display\n2.add data\n3.delete\n4.Search");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			display();
			break;
		case 2:
			add();
			break;
		case 3:
			delete();
			break;
        case 4:
            search();
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
