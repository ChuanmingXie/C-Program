/*
1.����һ��n*n�ľ���
2.�Ը��Խ��߽��л���ɸѡ
3.��ɸѡ�����Ļ������
*/

#include<stdio.h>
#define N 10
int main()
{
	int n=0,i=0,j=0,s1=0,s2=0;
	int a[N][N];
	printf("������������n:");
	scanf("%d",&n);
	printf("����Ҫ���� %d ��,ÿ�� %d ��,�� %d ��\n",n,n,n*n);
	//��������
	for(i=0;i<n;i++)
	{
		printf("�� %d ��:\n",i+1);
		for(j=0;j<n;j++)
		{
			printf("�� %d ��:",j+1);
			scanf("%d",&a[i][j]);
		}
	}
	//��ӡ����
	printf("������ķ���������ʾ:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	//��������
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(((i+j)==(n-1))&&(a[i][j]%2!=0))
				s2+=a[i][j];
			if((i==j)&&(a[i][j]%2==0))
				s1+=a[i][j];
		}
	}
	printf("����ĸ��Խ���������Ϊ: %d\n",s2);
	printf("��������Խ���ż����Ϊ: %d\n",s1);
}