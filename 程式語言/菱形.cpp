#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int a;
	int space;
	int star;
	for(a=-25;a<=25;a++){
		space=abs(a);
		star=51-2*space;
		for(i=0;i<space;i++){
			printf(" ");
		}
		for(i=0;i<star;i++){
			printf("*");
		}
		printf("\n");
		
} 
}
