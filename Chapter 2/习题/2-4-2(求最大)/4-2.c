/*N ���������ֵ*/
#include <stdio.h>
#include<conio.h>
#define N 10
int main()
{
	/*
	int max2();
	printf("���ֵΪ%d\n",max2());
	*/
	
	int max(int a[]);
	int i,a[N];
	printf("�������������,�ո�ָ�\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("���ֵΪ%d\n",max(a));
	getch();
	return 0;
}

int max(int a[])
{
	int M=a[0],i;
	for(i=0;i<N;i++)
	{
		if(a[0]<a[i]) M=a[i];
	}
	return M;
}


int max2()
{
	int i=0,a,max;
	printf("�������������,�ո�ָ�\n01 02 03 04 05 06 07 08 09 10\n");
	scanf("%d",&max);		//�ѵ�һ���������ֵ
	while(i<N-1)
	{
		scanf("%d",&a);
		if(a>max)		//�����������������Ƚϲ�����
			max=a;
		++i;
	}
	return max;
}
