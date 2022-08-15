#include<stdio.h>
#include<string.h>
int main()
{
	char a[80],ch;
	int i=0,l=0;
	printf(" ‰»Î:");
	gets(a);
	l=strlen(a);
	for(i=0;i<l/2;i++)
	{
		ch=a[i];
		a[i]=a[l-i-1];
		a[l-i-1]=ch;
	}
	printf(" ‰≥ˆ:");
	puts(a);
	getch();
}