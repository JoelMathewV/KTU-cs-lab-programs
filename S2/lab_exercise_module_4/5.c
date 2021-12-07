//Declare a union containing 5 string variables (Name, House Name, City Name, State and Pin code) each with a
//length of C_SIZE (user defined constant). Then, read and display the
//address of a person using a variable of the union.
#include<stdio.h>
#include<string.h>
#define C_SIZE 20
int main(){
    union person
    {
        char name[C_SIZE];
        char House_name[C_SIZE];
        char city[C_SIZE];
        char state[C_SIZE];
        int pincode;
    } a;
    printf("enter the address of the person ");
    scanf("%s", a.House_name);
    printf("the address is: %s\n",a.House_name);
    return 0;
}