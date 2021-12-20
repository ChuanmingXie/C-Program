//求两个数最大者
#include<stdio.h>
int main()
{
	int max(int x,int y);

	int a,b,c;
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("max=%d\n",c);
	return 0;
}

int max(int x,int y)
{
	int z;
	if(x>y)  //注意不能写成"<"
		z=x;
	else z=y;
	return z;
}