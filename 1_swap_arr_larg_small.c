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
int min(int arr[10],int n){
	int i,index,min;
	min = arr[0];
	index = 0;
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
			index = i;}
	}
	return index;
}
int max(int arr[10],int n){
	int i,ind,max;
	max = arr[0];
	ind = 0;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			ind = i;}
	}
	return ind;
}
int main(){
	int arr[10],n,mine,maxe,mini,maxi;
	printf("Enter the number of elements in array :\n");
	scanf("%d",&n);
	create(arr,n);
	display(arr,n);
	mini= min(arr,n);
	maxi = max(arr,n);
	int temp;	
	temp = arr[mini];
	arr[mini] = arr[maxi];
	arr[maxi] = temp;
	display(arr,n);

	
}





