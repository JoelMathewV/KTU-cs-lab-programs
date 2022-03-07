#include<stdio.h>
int n;
void mergesort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
void input(int a[],int n);
void display(int a[],int n);
int main(){
	int low=0;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n],high=n-1;
    printf("Enter the Numbers");
	input(a,n);
	mergesort(a,low,high);
	display(a,n);
	return 0;
}
void input(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
void mergesort(int a[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}	
}
void merge(int a[],int low,int mid,int high){
	int b[50];
	int i=low,j=mid+1,k=low;
	while(i<=mid&&j<=high){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
			k++;
		}else{
			b[k]=a[j];
			j++;
			k++;
		}
	}while(i<=mid){
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=high){
		b[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++){
		a[i]=b[i];
	}
	
}