#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int create(int arr[100]){
	int i;
	srand ( time(NULL) );
	for(i=0;i<100;i++){
			arr[i]=100+rand() / (RAND_MAX / 300 + 1);
			
	}
}
void display(int arr[100]){
	int i;
	for(i=0;i<10;i++){
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
int linear(int arr[100],int find){
	int i,c=0;
	for(i=0;i<100;i++){
		c++;
		if(arr[i]==find){
			printf("By using Linear search comparisons are %d\n",c);
			return 1;	
	}	
	}
	return 0;
	
}
/**int binary(int arr[100],int find,int start,int end){
	if(end>=start){
		int mid=start+(end-start)/2;
		if(arr[mid]==find){
			return 1;
		}else if(arr[mid]>find){
			return binary(arr,find,start,mid-1);
		}else{
			return binary(arr,find,mid+1,end);			
		}
		

	}
	return 0;
	
}**/
int binary(int arr[], int start, int end, int find)
{
	int c=0;
     while (start <= end)
  {
    int m = start + (end-start)/2;
    if (arr[m] == find)
        return c;  
 
    if (arr[m] < find) 
        start = m + 1; 
 
    else
         end = m - 1; 
	c++;

  }
 
  return 0; 
}
int main(){
	int n=100,find,i,lin,bin,perLin=0,perBin=0;
	int arr[100];
	create(arr);
	sort(arr,n);
	display(arr);
	srand ( time(NULL) );
	for(i=0;i<10;i++){
		find = 100+rand() / (RAND_MAX / 300 + 1);
		printf("%d\n",find);
		lin = linear(arr,find);
		bin = binary(arr,0,99,find);
		if(lin){
			perLin +=1;}
		if(bin){
			printf("By using Binary search comparisons are %d\n",bin); 
			perBin += 1;}


	}
			
		printf("\n Linear Search found %d number of elements out of 100\n",perLin);
		printf("\n Binary Search found %d number of elements out of 100\n",perBin);
		
}
