#include<stdio.h>
//条件表达式写法
int main()
{
	float x;
	int y;
	printf("请输入x的值\n");
	scanf("%f",&x);
	//y=(x>0)?1:(x<0?-1:0);
	y=(x>=0)?(x>0?1:0):-1;
	printf("y=%d\n",y);
}


//if选择语句表达方式
/*int main()
{
	float a;
	int b;
	printf("请输入a的值\n");
	scanf("%f",&a);

	if(a>0)
	{
		b=1;printf("b=%d\n",b);
	}
	else if(a<0)
	{
		b=-1;printf("b=%d\n",b);
	}
	else 
	{
		b=0;printf("b=%d\n",b);
	}
}*/