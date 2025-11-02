#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int randomNumber=rand()%100+1;
	int guessNumber;
	int i=0;
	int high=100;
	int low=1;
	
	printf("輸入一個1~100的數字");
	while(1){
		scanf("%d",&guessNumber);
		if(guessNumber>100||guessNumber<0){
			printf("請輸入範圍以內的數字!");
			continue;
		}
		
		
		if(guessNumber-randomNumber>0){
		
			high=guessNumber-1;
			printf("%d~%d",low,guessNumber);
		
		}
		else if(guessNumber-randomNumber<0){
			low=guessNumber+1;

			printf("%d~%d",guessNumber,high);
			
		}
		else{
			printf("答對!\n");
		}
	}
	return 0;
}
