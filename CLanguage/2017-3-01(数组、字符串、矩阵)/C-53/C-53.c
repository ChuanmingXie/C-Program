#include<stdio.h>
#include<string.h>
int main()
{
	char s[80],c;
	int i=0,num=0;

	printf("�������ַ���:s=");
	//scanf("%s",&s);//����Ͳ�̫�ʺ���scanf()������
	gets(s);
	printf("������ͳ�Ʒ�:c=");
	scanf("%c",&c);
	for(;s[i]!='\0';i++)
	{
		if(s[i]==c)
			num++;
	}
	printf("%d\n",num);
	puts(s);

	getch();
}