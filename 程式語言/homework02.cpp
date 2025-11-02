#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 4


void generate_secret_number(int secret[]) {
    int i, j;
    int num;
   
    for (i = 0; i < SIZE; i++) {
        do {
            num = rand() % 10;  
            for (j = 0; j < i; j++) {
                if (secret[j] == num) {
                    break;
                }
            }
        } while (j < i);  
        secret[i] = num;
    }
}

void get_feedback(int secret[], int guess[], int *m, int *n) {
    int i, j;
    *m = 0;
    *n = 0;

    for (i = 0; i < SIZE; i++) {
        if (secret[i] == guess[i]) {
            (*m)++;
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i != j && secret[i] == guess[j]) {
                (*n)++;
                break;
            }
        }
    }
}

int main() {
    int secret[SIZE];
    int guess[SIZE];
    int m, n;
    char input[SIZE + 1]; 
    int valid_input;

    
    srand(time(NULL));

    generate_secret_number(secret);

    printf("歡迎來到猜數字遊戲！\n");

    while (1) {
        valid_input = 1;
        printf("請猜一個四位不重複的數字：");
        scanf("%s", input);

        if (strlen(input) != SIZE) {
            valid_input = 0;
        } else {
            for (int i = 0; i < SIZE; i++) {
                if (input[i] < '0' || input[i] > '9') {
                    valid_input = 0;
                    break;
                }
                for (int j = i + 1; j < SIZE; j++) {
                    if (input[i] == input[j]) {
                        valid_input = 0;
                        break;
                    }
                }
            }
        }

        if (!valid_input) {
            printf("請輸入四位不重複的數字！\n");
            continue;
        }

        
        for (int i = 0; i < SIZE; i++) {
            guess[i] = input[i] - '0';
        }

        
        get_feedback(secret, guess, &m, &n);

        printf("%dA%dB\n", m, n);

        
        if (m == SIZE) {
            printf("猜對了！\n");
            break;
        }
    }

    return 0;
}
