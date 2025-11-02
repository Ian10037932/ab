#include<stdio.h>
#include<stdlib.h>
#include <time.h> // 新增用於隨機種子

int main() {
    int random_number;
    int enter_number;
    int min = 1;           // 初始範圍
    int max = 100;

    // 設置隨機種子，基於當前時間確保每次運行不同
    srand(time(NULL));
    random_number = (rand() % 100) + 1; // 產生 1 到 100 的隨機數

    while (random_number != enter_number) {
        printf("請猜一個自然數 (%d 到 %d): ", min, max);
        if (scanf("%d", &enter_number) != 1) { // 檢查輸入是否成功
            printf("請輸入有效數字！\n");
            while (getchar() != '\n'); // 清除輸入緩衝
            continue;
        }

        if (enter_number < min || enter_number > max) {
            printf("請猜在 %d 到 %d 範圍內！\n", min, max);
            continue;
        }

        if (random_number > enter_number) {
        	min = enter_number + 1; // 調整下限
            printf("太小了！再試一次。\n");
            
        } else if (random_number < enter_number) {
        	max = enter_number - 1; // 調整上限
            printf("太大了！再試一次。\n");
            
        }
    }

    printf("答對了！答案是 %d\n", random_number);
    return 0;
}
