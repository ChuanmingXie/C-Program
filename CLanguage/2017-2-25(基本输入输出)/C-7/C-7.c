#include<stdio.h>
int main()
{
	char c;
	printf("������һ���ַ�");
	scanf("%c",&c);
	if(c>='a'&&c<='z')
		c=c-32;
	else if(c>='A'&&c<='Z')
		c=c+32;
	printf("%c\n",c);
}