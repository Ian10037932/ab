#include<stdio.h>
int main(){
	int user_type1=180;
	int user_type2=180;
	if (user_type2){
		if(user_type2>200){
			printf("%.2f\n",user_type2*0.9);
		}
		else{
			printf("%.2f\n",user_type2*0.97);
		}
	}
	else{
		if(user_type1>100){
			printf("%.2f\n",user_type1*0.95);
		}
		else{
			printf("%d\n",user_type2);
	    }
	}
}
