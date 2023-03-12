#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char * argv[])
{
    if(argc == 1){
        printf("请输入一元二次方程的标准形式下的二次项系数,一次项系数和常数项!");
        return 0;
    }
    if(argc != 4){
        printf("输入的参数不符合规则!");
        exit(1);
    }
    float nums[3] = {0}; 
    for(int count = 0;count < 3;count++)
        nums[count] = atof(argv[count + 1]);
    float delta;
    delta = nums[1] * nums[1] - 4 * nums[0] * nums[2];
    if(delta < 0){
        printf("无解!");
        return 0;
    }
    float x1,x2;
    x1 = (-nums[1] + sqrt(delta)) / (2 * nums[0]);
    x2 = (-nums[1] - sqrt(delta)) / (2 * nums[0]);
    printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);
    return 0;
}
