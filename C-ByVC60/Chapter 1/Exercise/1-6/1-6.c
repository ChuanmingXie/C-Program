/*输出三数之中最大数*/

#include <stdio.h>

int main()
{
	int Max(int x,int y,int z);    //函数声明
	
	int a,b,c;
	printf("请输入测试数据:\n");
	scanf("%d,%d,%d",&a,&b,&c);    //记得在%d之间加“，”
	printf("Max is %d\n",Max(a,b,c));
	return 0;
}

int Max(int x,int y,int z)
{
	int M=x;
	if(M<y)  M=y;
	if(M<z)  M=z;
	return M;
}