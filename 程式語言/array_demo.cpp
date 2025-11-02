#include<stdio.h>
int main(){
	printf("輸入五組數字:\n");
	int arr[5]={}; 
	int i=0;
	scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	printf("\n你輸入的數字是:\n");
	for(i=0;i<5;i=i+1){
		printf("%d\n",arr[i]);
	}	
} 
