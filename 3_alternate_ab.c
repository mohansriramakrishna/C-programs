#include<stdio.h>
int create(int arr[10],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Created\n");
}
void display(int arr[10],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("Displayed\n");
}
int createp(int *ar,int ar1[10],int ar2[10],int n1,int n2){
	int i,check,j,p;
	i=0,j=0,p=0;
	check=0;
	while(1){
		if(i<n1){
			*(ar+p)=ar1[i];
			p = p+1;
			i++;
		}
		if(j<n2){
			*(ar+p) = ar2[j];
			p = p+1;
			j++;	
		}
	if(i==n1){
		if(n1>=n2){
			break;
		}
		else{
			if(j==n2){
				break;
			}
		}
	}
	}	
}
int duplicate(int arr[10],int t){
	int i,j,k;
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			if(i==j){
				continue;
			}
			if(arr[i]==arr[j]){
				for(k=j;k<t;k++){
					arr[k]=arr[k+1];
				}
			}	
		
		}
	}
}
int main(){
	int a,b;
	printf("Enter elements in A and B");
	scanf("%d %d",&a,&b);
	int arA[a],arB[a],arC[100];
	create(arA,a);
	create(arB,b);
	printf("\n");
	display(arA,a);
	printf("\n");
	display(arB,b);
	int *ptr;
	ptr = arC;
	createp(ptr,arA,arB,a,b);
	duplicate(arC,10);
	display(arC,a+b);
	
}
