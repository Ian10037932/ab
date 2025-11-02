#include<stdio.h>
int main(){
	FILE*note;
	int num;
	note=fopen("data.txt","r");
	if(note==NULL){
		printf("沒有這個檔案");
		return 1;
	}
	fscanf(note,"%d",&num);
	printf("讀取的數字是%d",num);
	return 0;
}
