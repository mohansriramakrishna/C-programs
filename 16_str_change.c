#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int displayString(char str[]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;}
         
}
int changeCase(char str[]){
	int n,i,asc;
	char c;
	n=strlen(str);
	for(i=0;i<n;i++){
		asc=str[i];
		if(asc>=65 && asc<=90){
			str[i]='#';
			}
		if(asc>=97 && asc<=122){
			str[i]='*';			
			}
		else{
			str[i]=str[i];
		}
	}
}
int main()
{
	char str[100];
	char *s ;
	
	printf("Enter a string: ");
	scanf("%s",str);
	s=str;
	printf("Entered string is: ");
	displayString(str);
	changeCase(str);
	s=str;
	printf("\n");
	displayString(str);
}
