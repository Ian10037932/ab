#include<stdio.h>
int main(){
	char word_enter[1001];
	int i=0;
	
	scanf("%1000s",word_enter);
	
	while(word_enter[i]!='\0'){
		
		if(word_enter[i]==','){    //°O±o"==" 
			printf("\n");
		}
		else{
			printf("%c",word_enter[i]);
		}
		i++;
	}
	
	return 0;

}
