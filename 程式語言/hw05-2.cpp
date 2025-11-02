#include<stdio.h>
int main(){
	int cmd;
	int lcm;
	int i=1;
	int i1;
	int i2;
	int total=i1+i2;
	
	printf("please enter first number:");
	scanf("%d",&i1);
	printf("please enter second number:");
	scanf("%d",&i2);
	while(i<=total){
		if(i1%i==0&&i2%i==0){
			
			cmd=i;	
		}
		i++;
	}
	
	lcm=i1*i2/cmd;
	printf("程そ计琌%d程そ计琌%d",cmd,lcm);
	return 0;
}
