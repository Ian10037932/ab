#include<stdio.h>
int main(){
    int i, a;
    int num;
    scanf("%d", &num);

    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            // 檢查 i 是否為質數
            int isPrime = 1;
            for(a = 2; a < i; a++) {
                if(i % a == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}

