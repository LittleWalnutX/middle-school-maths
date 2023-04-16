#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    if (argc != 2) {
		printf("请输入一个整数！");
		return 1;
    }
    long long unsigned int origin = strtoull(argv[1], NULL, 0);
	long long unsigned int current = origin;
    long long unsigned int i = 2;
    while (current != 1) {
		if (current % i == 0) {
			printf("%d; ", i);
			current /= i;
		}
		else i++;
		if (i * i > origin) {
			printf("%llu; ", current);
			break;
		}
	}
	putchar('\n');

}
