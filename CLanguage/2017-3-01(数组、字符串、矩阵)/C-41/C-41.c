#include<stdio.h>
int main()
{
	int a[10];
	int n=0,i=0,max=0,w=0,t=0,min=0,v=0,s=0;
	float ave=0;

	//ȷ������
	printf("���������ݸ���n: ");
	scanf("%d",&n);

	//¼������
	for(i=0;i<n;i++)
	{
		printf("������ĵ� %4d ������Ϊ:",i+1);
		scanf("%d",&a[i]);
	}

	//����ƽ��ֵ
	printf("\n�����ֵΪ:");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
		ave+=a[i];
	}
	printf("\n\n����ƽ��ֵ:  %5.2f\n\n",ave/n);

	//�������
	printf("�������Ϊ:");
	for(i=n-1;i>=0;i--)
	{
		printf("%4d",a[i]);
	}
	printf("\n\n");

	//������ֵ���±�
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i]) 
		{
			max=a[i];
			w=i;
		}
		if(min>a[i])
		{
			min=a[i];
			v=i;
		}
		w=v=i;       //��Ҫ����w��v�ĳ�ʼֵ!!!
	}
	printf("�������ֵ: %3d,�±�Ϊ(�±��0��ʼ):%2d\n\n",max,w);
	

	//��Сֵ��a[0],���ֵ��a[n]
	t=a[w];	a[w]=a[n-1]; a[n-1]=t;
	s=a[v]; a[v]=a[0]; a[0]=s;
	printf("���������:");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n\n");
}