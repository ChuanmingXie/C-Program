#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,word=0,num=0,sum=0,p=0;
	char str[50],c;
	gets(str);

	for(i=0;(c=str[i])!='\0';i++)
	{
		if(c>='0'&&c<='9')
		{
			word=1;
			num++;
			if(num==1)
				{p=(c-48);}
			else
				{p=p*10+(c-48);}	
		}
		else if(word==1)//���word�����0���Ͳ����ٽ����ˣ�Ҳ�͹ر��˼�P�Ŀ���
		{				//����������֣���wordֵΪ1�������տ�ʼ�����˷�����������ͺ󣬹رմ���
			sum+=p;
			word=0;		//ֻ���������Ѿ������꣬���ǲ��ܹرմ���
			num=0;
		}

	}

	printf("%d\n",sum);
}