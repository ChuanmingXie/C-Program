//运算符与基本输入输出
#include<stdio.h>
int main()
{
	float a,b,c=0;
	float sum,plant,ave;
	printf("请输入三个测试数据\n");
	scanf("%f,%f,%f",&a,&b,&c);
	sum=a+b+c;
	plant=a*b*c;
	ave=sum/3;
	printf("三个数的和为：%f\n",sum);
	printf("三个数的积为：%f\n",plant);
	printf("三个数的平均值为：%f\n",ave);
}
