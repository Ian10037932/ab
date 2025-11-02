#include<stdio.h>
int main(){
	int enter;
	printf("enter the nature number:");
	scanf("%d",&enter);
	printf("%d times two equals %d",enter,enter*2);





	
	int enter;
	
	printf("enter the nature number:");
	
	scanf("%d",&enter);
	
	if(enter%2==0){
		
		printf("%d is even");
	}
	
	else if(enter%2!=0){
		
		printf("%d is odd");
	}
	
	else{
		
		printf("please enter nature number");
	}
	
	
}
