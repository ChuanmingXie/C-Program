#include<stdio.h>
int main()
{
	float x,y;
	char op;

	printf("请输入要操作的数据运算式:\n格式为：data1 op data2\n");

	scanf("%f",&x);scanf("%c",&op);scanf("%f",&y);
	//scanf("%f%c%f",&x,&op,&y);
	switch (op)
	{
	case '+':printf("%f%c%f=%f\n",x,op,y,x+y);break;
	case '-':printf("%f%c%f=%f\n",x,op,y,x-y);break;
	case '*':printf("%f%c%f=%f\n",x,op,y,x*y);break;
	case '/':
		if(y!=0)		
		{	
			printf("%f%c%f=%f\n",x,op,y,x/y);break;
		}
		else
			printf("除数不能为0！\n");
	}
	

}