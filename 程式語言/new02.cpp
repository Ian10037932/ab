#include<stdio.h>
int main(){
	int john_score=89;
	int mike_score=98;
	john_score=mike_score;
	mike_score=89;
	printf("john的成績是%d\n",john_score);
	printf("mike的成績是%d\n",mike_score);
	return 0;
} 
