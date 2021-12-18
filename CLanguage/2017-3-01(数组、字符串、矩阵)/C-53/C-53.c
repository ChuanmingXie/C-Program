#include<stdio.h>
#include<string.h>
int main()
{
	char s[80],c;
	int i=0,num=0;

	printf("请输入字符串:s=");
	//scanf("%s",&s);//这里就不太适合用scanf()函数；
	gets(s);
	printf("请输入统计符:c=");
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