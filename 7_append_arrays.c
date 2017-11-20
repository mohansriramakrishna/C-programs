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
int append(int arA[10],int arB[10],int arC[20],int n){
	int i,j=0;
	for(i=0;i<n;i++){
		if(i==10){
			j=0;}
		if(i<10){
			arC[i]=arA[j];
			j++;
			
		}else{
			arC[i]=arB[j];
			j++;
			}
					
	}
}
int main(){
	int arA[10],n,arB[10],arC[20];
	printf("enter n");
	scanf("%d",&n);
	create(arA,n);
	create(arB,n);
	display(arA,n);
	display(arB,n);
	append(arA,arB,arC,10);
	display(arC,10);

}
