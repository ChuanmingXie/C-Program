#include<stdio.h>
int main()
{
	int a,b;
	long c;
	char d,ch[6];
	float e;
	scanf("%d,%d,%ld,%c,%f,%s",&a,&b,&c,&d,&e,ch);
	printf("%d,%d,%ld,%c,%f,%s\n",a,b,c,d,e,ch);
}