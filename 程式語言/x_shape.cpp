#include<stdio.h>
int main(){
	int n;
	int i;
	int j;
	printf("輸入想要的X大小(整數):");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==i||j+i==n+1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
