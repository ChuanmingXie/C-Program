#include<stdio.h>
#include<string.h>
int main()
{
	char str1[40],str2[40];
	gets(str1);
	gets(str2);
	puts(str1);
	puts(str2);

	printf("%d\n",strlen(str2));

	printf("%s\n",strlwr(str1));

	printf("%s\n",strupr(str2));

	printf("%s\n",strcat(str1,str2));
}