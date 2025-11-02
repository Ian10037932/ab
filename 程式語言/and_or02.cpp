#include<stdio.h>
int main(){
	int year;
	printf("輸入年分:");
	printf("Input Year:");
    scanf("%d",&year);
	if(year%4==0||year%400==0&&year%100!=0){
		
		printf("Year %d is a singular year!",year);
	}
	else{

		printf("Year %d is not a singular year!",year);
	}
}
