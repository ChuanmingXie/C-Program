//字符串比较函数strcmp的使用

#include<stdio.h>
#include<string.h>
int main()
{
	char s[10][40],*p[10],*q;
	int n=0,i=0,j=0;
	printf("请输入人数:");
	scanf("%d",&n);

	for(;i<n;i++)
	{
		printf("请输入第 %d 个室友的名字:",i);
		//gets(s[i]);           这里不能结合printf运用gets函数因为有自动空格的现象。
		scanf("%s",s[i]);
		p[i]=s[i];
	}
	printf("原始输入为:\n");
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

	printf("按姓名排序结果为:\n");
	for(i=0;i<n;i++)
	{
		puts(p[i]);
	}
	
}