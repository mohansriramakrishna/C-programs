#include<stdio.h>
int bin(int);
int bin(int n){
	if(n==0 || n==1){
		printf("%d",n);
	}
	else{
		bin(n/2);
		printf("%d",n%2);
	}
	

}
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	bin(n);
	if(n<=127 && n>=0){
		printf("\n%c\n",n);

		}
}
