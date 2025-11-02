#include<stdio.h>
int main(){
	int i;
	printf("Input the number of Person: ");
	scanf("%d",&i);
	char str1[i+1];
	int a;
	for(a=0;a<i;a++){
		printf("Input name:");
		scanf(" %s",str1);
		printf("hello,%s\n",str1);
	}
	
	
}
