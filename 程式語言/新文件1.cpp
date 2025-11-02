#include <stdio.h>
#include <math.h>

int main() {
    double base = 2.0;
    double exponent = 33.0;
    double result = pow(base, exponent); // 計算 2^3
     printf("%.0f 的 %.0f 次方是 %.0f\n", base, exponent, result); // 輸出：2 的 3 次方是 8
    return 0;
}
