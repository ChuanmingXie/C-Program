#include<stdio.h>
int main()
{
	//变量定义
	float x;
	char op;
	float AmountMoney(float m,char c);
	//利息说明
	printf("存款期限说明：\n");
	printf("A----三个月的利息为------1.71%%----\n");
	printf("B----半  年的利息为------1.98%%----\n");
	printf("C----一  年的利息为------2.25%%----\n");
	printf("D----两  年的利息为------2.79%%----\n");
	printf("E----三  年的利息为------3.33%%----\n");
	printf("F----五  年的利息为------3.60%%----\n\n");
	//输入数值
	printf("请输入预存金额|存款类型(A|B|C|D|E|F):");
	scanf("%f|%c",&x,&op);
	//函数计算
	if(x>0&&op>='A'&&op<='F')
		printf("您的本利和为%f元\n",AmountMoney(x,op));
	else
		printf("输入有误!\n");
}

float AmountMoney(float m,char c)
{
	switch(c)
	{
	case 'A':m=m*(1+1.71/100/4);break;
	case 'B':m=m*(1+1.98/100/2);break;
	case 'C':m=m*(1+2.25/100);break;
	case 'D':m=m*(1+2.79/100*2);break;
	case 'E':m=m*(1+3.33/100*3);break;
	case 'F':m=m*(1+3.60/100*5);break;
	default :m=0;
	}
	return m;
}