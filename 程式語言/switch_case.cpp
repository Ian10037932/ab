#include<stdio.h>
int main(){
	int category=2;
	float price=299.9;
	switch(category){
		case 1:
			if (price<500){
				printf("商品價格較低，無優惠");
			}
			else if(500<=price<=1000){
				printf("電子產品可享受5%的優惠");	
			}
			else{
				printf("電子產品可享受10%的優惠");
			}
			break;
		case 2:  
			if(price<500){
				printf("服裝價格較低，無優惠");
			}
			else if(200<price<500){
				printf("服裝可享受8%的優惠");
				
			}
			else{
				printf("服裝可享受15%的優惠");
			}
			break;
	
		defult:
			printf("無此商品\n");
	}
} 
