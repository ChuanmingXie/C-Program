#include <stdio.h>
int main()
{
	int a,b,c,min;
	printf("��������������a,b,c=");
	scanf("%d,%d,%d",&a,&b,&c);
	min=a;
	if(a>b) min=b;
	if(a>c) min=c;

	printf("min=%d\n",min);
}