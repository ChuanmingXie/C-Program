#include<stdio.h>
int main()
{
	int a[10];
	int *p=&a[0];
	void invv(int *x,int n);
	void inv(int arr[],int n);

	printf("�����������ֵ:\n");
	for(p=a;p<(a+10);p++)
		scanf("%d",p);

	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	printf("\n");

	invv(a,10);

	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	printf("\n");
}
void inv(int arr[],int n)
{
	int temp;
	int *i=&arr[0],*j=&arr[n-1];
	for(;i<j;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}

void invv(int *x,int n)
{
	int *i=x,*j=(x+n-1);  //�˴����ܻ��������Ĵ�����ʶ����*i=&x.����д�����ڴ������Ϊ*x��a[]����ʵ���ﴫ�ݵ��Ѿ���&a
	int temp;
	//i=x;j=x+n-1;    //������ֵʱҪ�������ַ�ʽ
	for(;i<j;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}