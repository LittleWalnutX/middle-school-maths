#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    //处理输入
    if(argc != 7) {
        printf("\
对于如\n\
      (x1,f(x1))\n\
      (x2,f(x2))\n\
      (x3,f(x3))\n\
的三个点，请输入 x1 f(x1) x2 f(x2) x3 f(x3) 作为程序的参数\n\
程序会给出穿过这三个点的二次函数解析式");
        return 1;
    }

    float x1, x2, x3, y1, y2, y3;
    x1 = atof(argv[1]);
    y1 = atof(argv[2]);
    x2 = atof(argv[3]);
    y2 = atof(argv[4]);
    x3 = atof(argv[5]);
    y3 = atof(argv[6]);
    //printf("%.2f %.2f %.2f %.2f %.2f %.2f \n",x1, y1, x2, y2, x3, y3);
	
    //处理
    float k, m, n, a, b, c; 
    k = x1 * x1 - (x2 + x3) * x1 + x2 * x3;
    m = x2 * x2 - (x1 + x3) * x2 + x1 * x3;
    n = x3 * x3 - (x1 + x2) * x3 + x1 * x2;
    //printf("k = %.2f;m %.2f;n %.2f\n",k, m, n);
    
    a = y1 / k + y2 / m + y3 / n;
    b = -(y1 * (x2 + x3) / k + y2 * (x1 + x3) / m + y3 * (x1 + x2) / n);
    c = y1 * x2 * x3 / k + x1 * y2 * x3 / m + x1 * x2 * y3 / n;
    //以上是根据拉格朗日插值公式得出的结论
    
    printf("此二次函数的解析式为：f(x) = %.2fx^2 + %.2fx + %.2f\n", a, b, c);
}
