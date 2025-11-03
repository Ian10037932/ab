#include<stdio.h>
//1.輸入兩個數字m和n,m<=n,計算從m家到n的和 包含m
int main(){
	int a,m,n,i,total;
	int b=0;

	scanf("%d%d",&m,&n);

	if(m>n){
		a=n;
		n=m;
	}
	else{
		a=m;
	}

	for(i=a;i<=m;i++){
		b=b+i;
	}

	total=b/(n-a);

	return 0;
{
