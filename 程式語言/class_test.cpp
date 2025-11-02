#include<stdio.h>
int main(){
	int price;
	printf("enter the car price");
	scanf("%d",&price);
	if(price>1000000){
		printf("上等車");
	}
	else if(500000<price<1000000){
		printf("中等車");
	}
	else {
		printf("普通車");
	}
}

