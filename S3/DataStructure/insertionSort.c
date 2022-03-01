#include<stdio.h>
void insertionSort(int array[], int n){
    int i;
    for(i=1;i<n;i++){
        int key = array[i];
        int j = i-1;
        while(j>=0 && array[j]>=key){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
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
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}