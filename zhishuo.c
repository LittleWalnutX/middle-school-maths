#include <stdio.h>
#include <math.h>

int main() {
    unsigned int sum, i, count = 0;
    _Bool flag;
    printf("计算一百万以内的质数\n");
    for (sum = 2; sum <= 1000000; sum++) {
        for (i = 2, flag = 1; i <= sqrt(sum); i++) {
            if (sum % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d,", sum);
            count++;
        }
    }
    printf("一百万以内共有%u个质数", count);
}
