#include<stdio.h>
int main(){
	int i;
	int num;
	int output;
	scanf("%d",&num);
	for(i=1;i<=4;i++){
		output=num%10;
		printf("%d",output);
		num=num/10;
		num-0.1*output;
	}
}
