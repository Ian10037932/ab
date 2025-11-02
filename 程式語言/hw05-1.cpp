#include<stdio.h>
int main(){
	int enter;
	int average;
	printf("輸入一個整數:");
	scanf("%d",&enter);
	average=(1+enter)/2;
	printf("1加到%d的平均值是%d",enter,average);
	return 0;
}
