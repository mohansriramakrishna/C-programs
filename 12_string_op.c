#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int create(char *str){
	char ch;
	ch = getchar();
	while(ch!='*'){
		*str++ = ch;
		ch = getchar();
	}
	*str++='\0';
}
int sort(char str[],int start,int end){
	int i,j,temp;	
	for(i=start;i<(end-1);i++){
		for(j=start;j<(i-1);j++){
			if((int)str[j]>(int)str[j+1]){
				temp=str[j];	
				str[j]=str[j+1];
				str[j+1]=temp;		
			}
		}
	}
}
int textOperations(char str[]){
	int words=0,chars=0,lines=0,i=0,start=0,end;
	while(str[i]!='\0'){
		chars++;
		if(str[i]==' '){
			/**end =i;
			sort(str,start,end);
			start=i;**/
			words=words+1;		
			}
		if(str[i]=='\n'){
			lines+=1;
			}
		i++;
		}
	i=i-1;
	printf("Number of chars=%d\nNumber of words = %d\n Number of lines = %d\n",chars,words+1,lines);
}

int main()
{
	char str[100],ch;
	char *ptr;
	ptr = str;
	int characters,words,lines;
	create(str);
	printf("%s\n",str);
	textOperations(str);
	sort(str,0,10);
	printf("%s\n",str);

}
