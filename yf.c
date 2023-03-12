#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
	if(argc == 0 || argc == 1){
		printf("输入有误!\n");
		exit(1);
	}
	int numbers[128] = {0};
	for(int count = 0;count < argc - 1;count++){
		numbers[count] = atoi(argv[count+1]);
	}
	int min;
    min = numbers[0];
    for(int i = 1;i < argc - 1;i++) // 取出数组中的最大值
        if(numbers[i] < min)
            min = numbers[i];
	int x = 2;
    while(1){
lb1:    if(x > min) break;
        for(short i = 0;i < argc - 1;i++)
            if(numbers[i] % x != 0){
                x++;
                goto lb1;
            }
        for(short i = 0;i < argc - 1;i++)
            numbers[i] = numbers[i] / x;
    }
    for(short i = 0;i < argc - 1;i++){
        printf("%d ",numbers[i]);
    }
    putchar('\n');
}
