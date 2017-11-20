#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int displayString(char str[]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;}
         
}
int strLen(char *str){
	if(*str=='\0'){
		return 1;
	}
	else{
		*str++;
		return 1+strLen(str);	
	}
}	
int palin(char str[]){
	int i=0,j=strlen(str)-1;
	int n=j/2;
	while(1){
		if(str[i]==str[j]){
			if(str[i]==str[j]&&i==n){
				return 1;
			}
			i=i+1;
			j=j-1;
		}	
		else{
			break;
		}
	}
	return 0;
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
	printf("\nLength of string is:");
	printf("%d",strLen(s)-1);
	printf("\n Is given string a palindrome :");
	printf("%d",palin(str));;
	printf("\n");

    return 0;
}
