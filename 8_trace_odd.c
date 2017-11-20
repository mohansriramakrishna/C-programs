#include<stdio.h>
int create(int arr[10][10],int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);		
			}
	}
}
void display(int arr[10][10],int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",arr[i][j]);		
			}
		printf("\n");
	}
	printf("\n");
}
int trace(int arr[10][10],int row,int col){
	int i,j,sum=0;
	if(row==col){
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i==j){
				sum+=arr[i][j];}		
			}
	}
	return sum;}else{return -1;}
}
int odd(int arr[10][10],int row,int col){
	int i,j,sum=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]%2!=0){
				sum+=arr[i][j];}		
			}
	}
	return sum;
}
int main(){
	int arr[10][10],row,col,trSum,odSum;
	printf("Enter row and cols");
	scanf("%d %d",&row,&col);
	create(arr,row,col);
	display(arr,row,col);
	trSum=trace(arr,row,col);
	odSum = odd(arr,row,col);
	printf("Trace=%d\t and sum of odd numbers =%d",trSum,odSum);
	
	
}
