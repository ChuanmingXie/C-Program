#include<stdio.h>
//�������ʽд��
int main()
{
	float x;
	int y;
	printf("������x��ֵ\n");
	scanf("%f",&x);
	//y=(x>0)?1:(x<0?-1:0);
	y=(x>=0)?(x>0?1:0):-1;
	printf("y=%d\n",y);
}


//ifѡ������﷽ʽ
/*int main()
{
	float a;
	int b;
	printf("������a��ֵ\n");
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