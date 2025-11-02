#include<stdio.h>
int main(){
	int i;
	int j;
	int n;
	int num=1;
	
	scanf("%d",&n);
	printf("\n\n\n");
	int array[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			array[i][j]=0;
		}
	} 
	
	
	for(i=0;i<=n-2;i++){
		array[0][i]=num;
		num++;
	}
	for(i=0;i<=n-2;i++){
		array[i][n-1]=num;
		num++;
	}
	for(i=n-1;i>=1;i--){
		array[n-1][i]=num++;
		num++;
	}
	for(i=n-1;i>=1;i--){
		array[i][0]=num++;
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%4d",array[i][j]);
		}
		printf("\n");
	}
	
}
