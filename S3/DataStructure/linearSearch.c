#include <stdio.h>
int linearSearch(int a[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
            return i + 1;
    }
    return -1;
}
int main()
{
    int n;
    printf("enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value to search for ");
    int val;
    scanf("%d", &val);
    int res = linearSearch(a, n, val);
    printf("The elements of the array are - ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nElement to be searched is - %d", val);
    if (res == -1)
        printf("\nElement is not present in the array");
    else
        printf("\nElement is present at %d position of array", res);
    return 0;
}