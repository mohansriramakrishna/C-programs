#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void displayString(char *str){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;}
         printf("\n");
}
char nonRepeat(char *str){
	int i,j,s=1;
	char c;
	for(i=0;str[i]!='\0';++i){
		s=0;
		for(j=0;str[j]!='\0';++j){
			if(i==j){
				continue;}
			else if(str[i]==str[j]){
				s=1;
				break;				
			}
			}
		if(s==0){
			printf("%c\n",str[i]);
			s=2;
			break;
		}
	}
	if(s!=2)
		printf("no non repeating character\n");

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
	nonRepeat(s);

}
