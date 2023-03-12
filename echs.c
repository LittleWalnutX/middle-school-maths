#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
	if(argc == 1){
		printf("请输入二次函数的标准形式下的二次项系数,一次项系数和常数项!");
		return 0;
	}
	if(argc != 4){
		printf("输入的参数不符合规则!\n请输入二次函数的标准形式下的二次项系数,一次项系数和常数项!");
		exit(1);
	}
    float nums[3] = {0}; 
    for(int count = 0;count < 3;count++)
		nums[count] = atof(argv[count + 1]);
	float dingdianx,dingdiany;
	dingdianx = -nums[1] /(2 * nums[0]); //-b/(2a)
	dingdiany = (4 * nums[0] * nums[2] - nums[1] * nums[1]) / (4 * nums[0]); //(4ac-b^2)/(4a)
	printf("顶点=(%.2f,%.2f)\n",dingdianx,dingdiany);
	return 0;
}
