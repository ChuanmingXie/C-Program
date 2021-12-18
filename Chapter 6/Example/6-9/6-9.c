#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str1[20],str2[20],str3[20];
	gets(str1);
	gets(str2);
	gets(str3);

	/*
	这里对上面的处理可以设为：
	char str[3][20];
	for(int i=0;i<3;i++)
		gets(str[i]);
	*/


	if(strcmp(str1,str2)>0)
		strcpy(str,str1);
	else
		strcpy(str,str2);

	if(strcmp(str3,str)>0)
		strcpy(str,str3);
	printf("\n最大为:");
	puts(str);
}
