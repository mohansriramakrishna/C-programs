#include<stdio.h>
int createLower(int arr[10][10],int n){
	int i,j,k=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j<=k){
				scanf("%d",&arr[i][j]);
			}else{
				arr[i][j]=0;
			}
			
		}
		k++;
	}
	printf("Created\n");
}
int createUpper(int arr[10][10],int n){
	int i,j,k=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j<k){
				arr[i][j]=0;
				
			}else{
				scanf("%d",&arr[i][j]);
			}
			
		}
		k++;
	}
	printf("Created\n");
}
int merge(int arU[10][10],int arL[10][10],int out[10][10],int n){
	int i,j,k=0;
	for(i=1;i<=n;i++){
		for(j=0;j<n;j++){
			if(i==0){
				out[i][j]=arU[i][j];
				
			}else if(i==n){
				out[i][j] = arL[i-1][j];
			}else{
				if(j<=k){
					out[i][j] = arL[i-1][j];
				}
				else{
					out[i][j] = arU[i][j];
				}
				
			}
			
		}
		k++;
	}
	for(i=0;i<=2;i++){
		for(j=0;j<n;j++){
			if(i==0){
				out[i][j]=arU[i][j];}}}
	
}
void display(int arr[10][10],int n,int n1){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("Enter N for a NxN matrix");
	scanf("%d",&n);
	int arU[10][10],arL[10][10];
	createUpper(arU,n);
	createLower(arL,n);
	printf("Upper\n");
	display(arU,n,n);
	printf("Lower\n");
	display(arL,n,n);
	int out[10][10];
	merge(arU,arL,out,n);
	printf("Merged\n");
	display(out,n+1,n);
}
