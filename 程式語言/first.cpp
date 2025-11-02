#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int minRange = 1, maxRange = 100;

    srand(time(NULL));
    secretNumber = (rand() % 100) + 1; 

    printf("歡迎玩終極猜數字遊戲！請猜一個 1 到 100 之間的數字。\n");

    do {
        printf("請輸入你的猜測 (%d 到 %d): ", minRange, maxRange);
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("恭喜你！猜對了！答案是 %d，總共用了 %d 次。\n", secretNumber, attempts);
        } else if (guess < secretNumber) {
            printf("太小了！再試一次。\n");
            if (guess > minRange) minRange = guess + 1;
        } else {
            printf("太大了！再試一次。\n");
            if (guess < maxRange) maxRange = guess - 1;
        }

    } while (guess != secretNumber);

    return 0;
}

