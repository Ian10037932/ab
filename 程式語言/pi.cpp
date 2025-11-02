#include<stdio.h>
#include<math.h>
int main(){
	const float pi=3.14;
	float circle_1;
	circle_1=pow(2,2)*pi;
	float circle_2;
	circle_2=pow(8,2)*pi;
	printf("%.2f\n",circle_1);
	printf("%.2f\n",circle_2);
	return 0;
}
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

