#include<stdio.h>
int main()
{
	char a[80],b[80],i=0;
	printf("ÇëÊäÈë²âÊÔ×Ö·û´®:");
	gets(a);
	printf("  a:  ");puts(a);
	for(;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]-=32;
		b[i]=a[i];
	}
	b[i]='\0';
	printf("  b:  "); puts(b);
	getch();
}