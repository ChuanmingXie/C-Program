#include<stdio.h>
int main()
{
	float ave(int p[],int n);
	int m=0,i=0,a[10];
	printf("���������ݸ���:");scanf("%d",&m);
	printf("�������������:\n");
	for(;i<m;i++)
		scanf("%d",&a[i]);

	printf("ƽ��ֵΪ:%g",ave(a,m));
	getch();
}

float ave(int p[],int n)
{
	int i=0;
	float sum=0;
	for(;i<n;i++)
	{
		sum+=p[i];
	}
	return sum/n;
}