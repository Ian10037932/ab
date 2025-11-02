#include<stdio.h>
int main(){
	int i;
	int j;
	int array[5][5]={};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&array[i][j]) ;
		}
	} 
	//90
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		printf("%d",array[j][4-i]) ;
		}
		printf("\n");
	} 
	printf("\n\n");
	//180
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		printf("%d",array[4-i][4-j]) ;
		}
		printf("\n");
	}
	printf("\n\n");
		
		//270
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		printf("%d",array[4-i][i]) ;
		}
		printf("\n"); 
	}
	printf("\n\n"); 
	
	return 0; 
	} 
	
	
	
	
	

