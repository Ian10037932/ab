#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int j;
	int a;
	int line;
	int space;
	int star;
	
	printf("輸入dimond的高度(整數):");
	scanf("%d",&line);
	a=(line+1)/2;
	for(i=1;i<=line;i++){
		space=abs(a-i);
		star=line-space*2;
		for(j=1;j<=space;j++){
			printf(" ");
		}
		for(j=1;j<=star;j++){
			printf("*");
		}
		printf("\n");
	
	}
}
