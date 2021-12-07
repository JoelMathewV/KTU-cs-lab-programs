// Implement a C program to read and display name, roll no, marks of 10 students using structure. Display the highest mark student details and average marks
#include<stdio.h>
#include<string.h>
struct student{
        char name[20];
        int rollno;
        int marks;
    }a[10];
int main(){
    int i, sum=0;
    float avg;
    printf("enter the name, roll no and marks of 10 students \n");
    for(i=0;i<10;i++){
        scanf("%s %d %d", &a[i].name, &a[i].rollno, &a[i].marks);
    }
    printf("the details of the students are \n");
    for(i=0;i<10;i++){
        printf("%s %d %d \n", a[i].name, a[i].rollno, a[i].marks);
    }
    struct student highest = a[0];
    for(i=1;i<10;i++){
        if(highest.marks < a[i].marks ){
            highest = a[i];
        }
    }
    printf("the highest mark student detail is %s %d %d \n", highest.name, highest.rollno, highest.marks);
    for(i=0;i<10;i++){
        sum += a[i].marks;
    }
    avg = sum/10;
    printf("the average mark is %f \n", avg);
    return 0;
}