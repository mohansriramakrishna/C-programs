#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int displayString(char str[]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;}
         
}
void subsequence(char stA[],char stB[]){
	int i,j,k=0,c=0,a,b;
	a=strlen(stA);
	b=strlen(stB);
	for(i=0;i<a;i++){
		for(j=k;j<b;j++){
			if(stA[i]==stB[j]){
				k=j;
				c=c+1;
			}
		}

	}
	if(c==a){
		printf("Given strA is subsequence of strB\n");
	}else{
		printf("Given strA is not subsequence of strB\n");
	}
}
int main()
{
	char stA[100],stB[100];
	
	printf("Enter A string: ");
	scanf("%s",stA);
	printf("\nEnter b string: ");
	scanf("%s",stB);
	printf("Entered A string is: ");
	displayString(stA);
	printf("\nEntered B string is: ");
	displayString(stB);
	printf("\n");
	subsequence(stA,stB);
}
