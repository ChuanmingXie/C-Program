#include<stdio.h>
int main()
{
	int a[10]={0},i=0,j=0,m=0,n=0;
	//�������
	printf("����������a[10]:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n");
	printf("\n������Ҫɾ����ֵ:");
	scanf("%d",&n);

	//���ܼ���
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			for(j=i;j<9;j++)
				a[j]=a[j+1];
				i--;m++;continue;
		}
	}

	//���
	for(i=0;i<10-m;i++)
	{
		printf("%d  ",a[i]);
	}
	getch();
}
