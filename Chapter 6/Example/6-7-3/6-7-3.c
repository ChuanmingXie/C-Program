#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[]="china!";
	char c[30],b[10],d[10];

	printf("%o\n",a);
	printf("%s\n",a);

	//scanf("%s",c);//记住不加&符
	//printf("%s\n",c);

	gets(b);
	puts(b);
	gets(d);	
	puts(d);

	strcpy(c,b);
	puts(c);

	strncpy(d,b,2);
	puts(d);
}