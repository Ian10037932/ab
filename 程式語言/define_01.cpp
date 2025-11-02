#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int answer=rand()%100+1; //the answer
	int GuessNumber;
	int high =100;
	int low=1;
	printf("please enter a number between 1~100:");
	while(1){
		scanf("%d",&GuessNumber);
		if(GuessNumber>100||GuessNumber<1){
			printf("please guess in range!");
			continue;
		}
		if(GuessNumber-answer>0){
			high=GuessNumber-1;
			printf("%d~%d:",low,high);
		}
		else if(GuessNumber-answer<0){
			low=GuessNumber+1;
			printf("%d~%d:",low,high);
		}
		else{
			printf("correct!");
		}
		return 0;
		
		
		
	}
	
}