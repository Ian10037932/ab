#include<stdio.h>
#include<stdlib.h>
int main(){
	int random_number=66;
	int enter_number;
	int min;
	int max;
	printf("please guess a nature number from 1~100:");
	scanf("%d",&enter_number);
	while(random_number!=enter_number){
		if(random_number>enter_number){
			printf("please guess a nature number from %d~%d:",enter_number,max);
			min=enter_number;
			scanf("%d",&enter_number);
		}
		if(random_number<enter_number){
			printf("please guess a nature number from %d~%d:",min,enter_number);
			max=enter_number;
			scanf("%d",&enter_number);
		}
		if(enter_number<1||enter_number>100){
			printf("please guess eithin range");
			scanf("%d",&enter_number);
		}
	}
	printf("µª¹ï¤F");
}
