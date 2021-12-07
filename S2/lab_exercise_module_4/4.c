//Using structure, read and print data of n employees (Name, Employee Id and Salary)
#include<stdio.h>
#include<string.h>
int main(){
    struct employee{
        char Name[10];
        int Employee_Id;
        int salary;
    };
    int n,i;
    printf("enter the no of employees ");
    scanf("%d",&n);
    struct employee a[n];
    for(i=0;i<n;i++){
        printf("enter the %d employee's name, employee id, salary ", i+1);
        scanf("%s %d %d", a[i].Name, &a[i].Employee_Id, &a[i].salary);
    }
    for(i=0; i<n; i++){
        printf("%s %d %d\n", a[i].Name, a[i].Employee_Id, a[i].salary );
    }

    return 0;
}