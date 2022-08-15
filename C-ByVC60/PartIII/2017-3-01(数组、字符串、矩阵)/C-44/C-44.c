#include<stdio.h>
/*int main()
{
	char a[20]={0},b[20]={0};
	int i=0;
	printf("请输入字符串a和b:\n");
	scanf("%s",&a);
	scanf("%s",&b);
	printf("您输入的两个字符串为:\na=%s\nb=%s\n",a,b);
	
}*/

int main()
{
	char a[20],b[20];
	int i,j;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0'&&j<5;j++)
		a[i+j]=b[j];
	a[i+j]='\0';
	puts(a);
	getch();
}