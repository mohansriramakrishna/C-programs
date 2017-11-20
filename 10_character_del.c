#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int displayString(char *ptr){
    while(*ptr!='\0')
        printf("%c",*ptr++);
         
}
int deleteGiven(char *ptr,char *cptr,char cc){
	while(*ptr!='\0'){
		if(*ptr!=cc){
			*cptr=*ptr;
			*cptr++;
		}
		*ptr++;	

	}
	

}

#include <stdio.h>
int main()
{
	char str[100],deleted[100];
	char *ptr,*cptr;

	printf("Enter a string: ");
	scanf("%s",str);
	ptr=str;
	cptr = deleted; 

	printf("Entered string is: ");
	displayString(ptr);
	char c='o';
	printf("\nAfter deleting the string is: ");
	deleteGiven(ptr,cptr,c);
	displayString(cptr);
    return 0;
}
