#include<stdio.h>
int main(){
	int a=0;
	int i=0;
	do{
		i=i+1;
		if(i%2==0){
			a=a+i;
		}	
	
	}while(i<100);
	printf("%d",a);
}
