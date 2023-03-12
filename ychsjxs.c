#include <stdio.h>
#include <stdlib.h>

int main(int argc,char ** argv)
{
    if(argc != 5) {
        printf("\
对于如(x1,y1)和(x2,y2)的两个点，\n\
请输入x1 y1 x2 y2作为程序的参数，\n\
程序会给出经过这两点的直线的解析式。\n");
        return 1;
    }
    float x1,y1,x2,y2,k,b;
    x1 = atof(argv[1]);
    y1 = atof(argv[2]);
    x2 = atof(argv[3]);
    y2 = atof(argv[4]);
    if(x1 == x2) {
        if(y1 == y2) {
            printf("这两点是同一点！\n");
            return 1;
        }
        printf("警告！这不是一个一次函数。\n他的表达式是x = %.2f\n",x1);
        return 0;
    }
    k = (y1 - y2) / (x1 - x2);
    b = y1 - k * x1;
    printf("这个一次函数的解析式为：\ny = %.2fx + %.2f\n",k,b);
    return 0;
}
