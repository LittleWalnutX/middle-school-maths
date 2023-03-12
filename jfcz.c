#include <stdio.h>
#include <stdlib.h>

int main(int argc,char ** argv)
{
	if(argc != 7) {
		printf("对于形如{\n    a1x+b1y=c1\n    a2x+b2y=c2\n} 的方程组，请依次输入a1 b1 c1 a2 b2 c2作为参数.\n程序会自动解出x,y的值.\n");
		return 1;
	}
    float nums[6] = {0}; 
    for(int count = 0;count < 6;count++)
        nums[count] = atof(argv[count + 1]);
	float x, y;
	x = (nums[4] * nums[2] - nums[1] * nums[5]) / (nums[0] * nums[4] - nums[1] * nums[3]);
	y = (nums[3] * nums[2] - nums[0] * nums[5]) / (nums[1] * nums[3] - nums[0] * nums[4]);
	printf("x = %.2f\ny = %.2f\n", x, y);
}
