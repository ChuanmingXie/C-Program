//�ַ����ȽϺ���strcmp��ʹ��

#include<stdio.h>
#include<string.h>
int main()
{
	char s[10][40],*p[10],*q;
	int n=0,i=0,j=0;
	printf("����������:");
	scanf("%d",&n);

	for(;i<n;i++)
	{
		printf("������� %d �����ѵ�����:",i);
		//gets(s[i]);           ���ﲻ�ܽ��printf����gets������Ϊ���Զ��ո������
		scanf("%s",s[i]);
		p[i]=s[i];
	}
	printf("ԭʼ����Ϊ:\n");
	for(i=0;i<n;i++)
	{
		puts(p[i]);
	}


	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(p[i],p[j])>0)
			{q=p[i];p[i]=p[j];p[j]=q;}
		}
	}

	printf("������������Ϊ:\n");
	for(i=0;i<n;i++)
	{
		puts(p[i]);
	}
	
}