/*
�������
����Ϊ��λ�������ֵ
�����ص�ֵ����������
���������ֵ���
*/


#include<stdio.h>
#define M 4
#define N 3
int main()
{
	int i=0,j=0,s=0;
	int a[M][N],max[N];
	//�������
	printf("�������������:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);

	//���ԭʼ����
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\n");	
	
	//��max[i];
	for(i=0;i<N;i++)
	{
		max[i]=a[0][i];
		for(j=0;j<M;j++)
		{
			if(a[j+1][i]>a[j][i])
				max[i]=a[j+1][i];
		}
	}

	for(i=0;i<N;i++)
	{
		printf("%4d",max[i]);
		s+=max[i];
	}
	printf("\nsum=%d\n",s);
	getch();
}
