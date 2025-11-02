#include<stdio.h>
int main(){
	int year=2088;
	if(year%4==0||year%400==0){
		if(year%100!=0){
			printf("%d\n年為閏年",year);
		}
		else{
			printf("%d\n年不是閏年",year);
		}
	}
	else{
			printf("%d\n年不是閏年",year);
		}
}
