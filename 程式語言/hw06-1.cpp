#include<stdio.h>
int main(){
	char word_01[51];
	char word_02[51];
	char word_total[101];
	int i=0,j=0;
	
	scanf("%50s",word_01);
	scanf("%50s",word_02);
	
	while(word_01[i]!='\0'){
		word_total[i]=word_01[i];
		i++; 
	}
	while(word_02[j]!='\0'){
		word_total[i]=word_02[j];
		i++;
		j++; 
	}
	
	printf("%s",word_total);
	
	return 0;
} 
