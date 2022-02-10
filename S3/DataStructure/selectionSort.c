#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int n){
    int i, j, min;
    for(i = 0; i<n; i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
            swap(&arr[min], &arr[i] );
        }
    }
}
void display(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    printf("enter the no of elements in the list");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the list");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    display(arr, n);

    return 0;
}