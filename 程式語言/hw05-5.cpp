#include<stdio.h>
int main(){
	int max;
	int a,b,c;
	int x=b,y=c;
	printf("輸入三角形的三邊長:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<c||a+c<b||b+c<a){
		printf("無法執行");
		return 1;
	}
	max=a;
	if(b>max){
		max=b;
		x=a;
		y=c;
	}
	if(c>max){
		max=c;
		x=a;
		y=b;	
	}
	if(max*max<x*x+y*y){
		printf("銳角三角形");
	}
	else if(max*max==x*x+y*y){
		printf("直角三角形");
	}
	else{
		printf("鈍角三角形");
	}
	return 0;
}
