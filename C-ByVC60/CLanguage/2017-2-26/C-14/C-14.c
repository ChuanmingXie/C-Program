#include<stdio.h>
int main()
{
	float x,y;
	char op;

	printf("������Ҫ��������������ʽ:\n��ʽΪ��data1 op data2\n");

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
			printf("��������Ϊ0��\n");
	}
	

}