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
void find(int arA[],int arB[],int arC[],int a,int b,int c){
	int i,j,k;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(arA[i]==arB[j]){
				for(k=0;k<c;k++){	
					if(arC[k]==arA[i]){
						printf("%d\t",arC[k]);
					}
				}			
				}
		}
	}
	printf("\n");
}
int main(){
	int arA[10],arB[10],arC[10];
	int a,b,c;
	printf("Enter n for 3 arrays");
	scanf("%d %d %d",&a,&b,&c);
	create(arA,a);
	create(arB,b);
	create(arC,c);
	printf("Displaying 3 arrays\n");
	display(arA,a);
	display(arB,b);
	display(arC,c);
	printf("common elements in these arrays:");
	find(arA,arB,arC,a,b,c);
}

