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
int cumSum(int arr[10],int n,int cS[10]){
	int i;
	int s=0;
	for(i=0;i<n;i++){
		s += arr[i];
		cS[i]=s;
	}

}
int main(){
	int arr[10],n,cS[10];
	printf("Enter n ");
	scanf("%d",&n);
	create(arr,n);
	display(arr,n);
	printf("Cummulative sum \n");
	cumSum(arr,n,cS);
	display(cS,n);
}
