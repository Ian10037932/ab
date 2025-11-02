#include<stdio.h>
int main(){
	int mike_score=89;
	int john_score=98;
	mike_score=john_score;
	john_score=89;
	printf("mikeず┬햋촑%d\n",mike_score);
	printf("johnず┬햋촑%d\n",john_score);
	printf("mikeず┬햋촑%dㅐ\n",mike_score);
	printf("johnず┬햋촑%dㅐ\n",john_score);
	return 0;
}
