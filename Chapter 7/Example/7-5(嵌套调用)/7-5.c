//������Ƕ�׵���
#include<stdio.h>
int main()
{
	float max4(float m,float n,float p,float q);
	float max2(float x,float y);

	float a,b,c,d;
	printf("�������ĸ�ֵ�Զ��Ÿ���:");
	scanf("%f,%f,%f,%f",&a,&b,&c,&d);
	printf("Max=%g\n",max4(a,b,c,d));
}

float max4(float m,float n,float p,float q)
{
	return max2(max2(max2(m,n),p),q);
}

float max2(float x,float y)
{
	return (x>y?x:y);
}