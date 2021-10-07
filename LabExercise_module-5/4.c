//4. Create a file and perform the following
//i) Write data to the file
//ii) Read the data in a given file & display the file content on console
//iii) append new data and display on console
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    FILE *a;
    
    a = fopen("data.txt","w");
    if(a == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    printf("enter some numbers: ");
    scanf("%d",&n);
    fprintf(a,"%d", n);
    fclose(a);

    a = fopen("data.txt","r");
    if(a == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    fscanf(a,"%d", &n);
    printf("%d", n);
    fclose(a);

    a = fopen("data.txt","a");
    if(a == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    printf("enter the data to append: ");
    scanf("%d", &n);
    fprintf(a,"%d", n);
    fclose(a);

    a = fopen("data.txt","r");
    if(a == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    fscanf(a,"%d", &n);
    printf("%d", n);
    fclose(a);
    return 0;
}