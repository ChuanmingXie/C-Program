#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,word=0,num=0;
	char str[30];
	gets(str);
	i=strlen(str);

	for(j=0;j<i;j++)
	{
		if(str[j]==' ')
			{word=0;}
		else if (word==0)//������ǿո���word��ֵΪ0�����ʾ��ʼ���µĵ���
			{num++;word=1;}
	}

	printf("%d\n",num);
}