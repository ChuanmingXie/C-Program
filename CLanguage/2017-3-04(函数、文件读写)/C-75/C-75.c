#include<stdio.h>
float g(int s[], int n);

int main()
{
	int stu[80],i=0,c=0;
	printf("������ѧ������:");
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		printf("�� %3d ���ɼ�Ϊ",i+1);
		scanf("%d",&stu[i]);
	}

	printf("ѧ��ƽ���ɼ�Ϊ:%g\n",g(stu,c));
}

float g(int s[], int n)
{
	int i=0;
	float p=0;
	for(;i<n;i++)
	{
		p+=s[i];
	}
	return p/n;
}