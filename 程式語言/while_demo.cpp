#include<stdio.h>
int main(){
	int i =0;
	int a=0;
	while(i<=100){
		
		if(i%2==0){
			printf("%d\n",i);
			a=a+i;
		}
		
	}
	printf("%d",a);
}
