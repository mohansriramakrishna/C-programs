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
void displaySub(int sub[10]){
	int i;
	for(i=0;sub[i]!=9999;i++){
		printf("%d\t",sub[i]);
	}
	printf("\n");
}
int sort(int arr[100],int n){
	int i,j,temp;	
	for(i=0;i<(n);i++){
		for(j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];	
				arr[j]=arr[j+1];
				arr[j+1]=temp;		
			}
		}
	}
}
int subarr(int arr[10],int sum,int n,int sub[10]){
	int i,j;
	for(i=0;i<n;i++){
		j=i;
		int s=0,subi=0;
		while(s<=sum && j<n){
			s+=arr[j];
			sub[subi]=arr[j];
			subi++;
			j++;
			if(s==sum){
				sub[subi]=9999;
				return 1;
				}

		}
	}
	return 0;
}

int main(){
	int arr[10],sub[10];
	int sum,n;
	printf("Enter n :");
	scanf("%d",&n);
	create(arr,n);
	display(arr,n);
	sort(arr,n);
	display(arr,n);
	printf("Enter sum to know its subarray");
	scanf("%d",&sum);
	int k=subarr(arr,sum,n,sub);
	if(k)
		displaySub(sub);
}	
