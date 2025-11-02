#include<stdio.h>
int main(){
	int a;
	printf("輸入一個數字:/n");
	scanf("%d",&a);
	if(a>=18){
		printf("adult");	
	}
	else if(12<=a<18){
		printf("teenager");
		}
		else if(a<18){
			printf("children");
		}
	else if(18<a<64){
		printf("壯年人口");
	}
	else{
		printf("老年人口");
	}
}
