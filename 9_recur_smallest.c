#include<stdio.h>
int create(int arr[10],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void display(int arr[10],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int recurSmallest(int arr[10],int start,int end){
	if(start==end){
		return arr[end];
	}else{
		if(arr[start]<arr[start+1]){
			int temp=arr[start+1];
			arr[start+1]=arr[start];
			arr[start]=temp;
		}return recurSmallest(arr,start+1,end);
	}
}

int main(){
	int arr[10],n;
	scanf("%d",&n);
	create(arr,n);
	display(arr,n);
	int small;
	small=recurSmallest(arr,0,n-1);
	printf("Smallest Element is %d",small);
}
