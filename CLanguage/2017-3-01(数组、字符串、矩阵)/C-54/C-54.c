#include<stdio.h>
#include<string.h>

int main()
{
	char s[80],c;
	int num=0,word=0,i=0;
	printf("请输入字符串:");
	gets(s);
	for(;(c=s[i])!='\0';i++)
	{
		if(c==' ')word=0;
		else if(word==0)
		{
			word=1;
			num++;
		}
	}
	printf("句子中的单词个数为: %d 个",num);
	getch();

}