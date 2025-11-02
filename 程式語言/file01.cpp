#include<stdio.h>
int main(){
	int enter;
	printf("輸入一個四位數字:");
	scanf("%d",&enter);
	FILE *note;
	note=fopen("data.txt","w");
	if(note==NULL){
		printf("沒有這個檔案");
		return 1;
	}
	
	fprintf(note,"%d",enter);
	fclose(note);
	return 0;
	
}
