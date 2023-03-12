#include <stdio.h>

int main() {
    unsigned int sum, i, count = 1, sqrt = 2, sqrt2 = 4;
    _Bool flag;
    printf("计算两千万以内的质数\n2, ");
    for (sum = 2; sum <= 20000000; sum++) {
	if (sqrt2 < sum) {
	    sqrt++;
	    sqrt2 = sqrt * sqrt;
	}
        for (i = 2, flag = 1; i <= sqrt; i++) {
            if (sum % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d, ", sum);
            count++;
        }
    }
    printf("两千万以内共有%u个质数\n", count);
}
