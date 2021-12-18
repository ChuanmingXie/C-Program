#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char str[100];
	int i=0;
	if((fp=fopen("a1","w"))==NULL)
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	printf("Input a string:");
	gets(str);
	while(str[i]!='!')
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
		fputc(str[i],fp);
		i++;
	}
	fclose(fp);

	fp=fopen("a1","r");
	fgets(str,strlen(str)+1,fp);  //从fp指向的文件读入一个长度为strlen(str)的字符串，存放到str数组中
	printf("%s\n",str);
	fclose(fp);

	getch();
	return 0;
}