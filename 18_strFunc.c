#include<stdio.h>
#include<stdlib.h>
int displayString(char str[]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;}
         
}
int strLen(char str[],int i){
	if(str[i]=='\0'){
		return 0;
	}
	else{
		i++;
		return 1+strLen(str,i);	
	}
}
char *strcpy(char *stA, const char *stB)
{
  unsigned i;
  for (i=0; stB[i] != '\0'; ++i)
    stA[i] = stB[i];

  return stA;
}
char *strcat(char *append,char *app){
	unsigned i,j;
	for(i=0;append[i]!='\0';i++)
	i=i+1;
	for(j=0;app[j]!='\0';j++){
		append[i]=app[j];
		i++;	
		}
	append[i]='\0';
	return append;
}
int strcmpe(char *stA,char *stB){
	unsigned i,j;
	int ascA,ascB;
	int a,b,s=0;
	a=strLen(stA,0);
	b=strLen(stB,0);
		if(a==b){
			for(i=0;i<a;i++){
				if(stA[i]==stB[i]){
					printf("\nf");
					s=0;
				}else{
					s=1;
				}	
			}
		
		}if(s){
			
			for(i=0;i<a;i++){
				ascA=stA[i];
				ascB=stB[i];
				if(stA[i]!=stB[i]){
					if(ascA<ascB)
						s=ascB-ascA;
					else
						s=ascA-ascB;					
					}
				}
			
			}
	return s;
		

}
int main()
{
	char str[100];
	char *s;
	printf("Enter a string: ");
	scanf("%s",str);
	int i=0;
	printf("Entered string is: ");
	displayString(str);
	printf("\n");
	s=str;
	char *str1 = "abcdefghijklmnop";
	char *str2 = malloc(200); 
	strcpy(str2, str1);
	strcat(str2,str);
	char *stra="abc";
	char *strb="abcd";
	int t=strcmpe(stra,strb);
	printf("strcmpe(stra,strb) is %d\n",t);	
	puts(str2);
	printf("%d",strLen(str2,0));
}
