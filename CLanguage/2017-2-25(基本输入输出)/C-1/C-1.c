#include<stdio.h>
int main()
{
	float a,b,c=0;
	float sum,plant,ave;
	printf("������������������\n");
	scanf("%f,%f,%f",&a,&b,&c);
	sum=a+b+c;
	plant=a*b*c;
	ave=sum/3;
	printf("�������ĺ�Ϊ��%f\n",sum);
	printf("�������Ļ�Ϊ��%f\n",plant);
	printf("��������ƽ��ֵΪ��%f\n",ave);
}