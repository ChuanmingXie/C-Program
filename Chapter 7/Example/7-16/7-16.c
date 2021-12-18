#include<stdio.h>
int main()
{
	int s(int x);
	int a=2,i=0;
	for(;i<10;i++)
		printf("%d\n",s(a));
}
int s(int x)
{
	int b=0;
	static c=3;
	b+=1;c+=1;
	printf("%d\t",c);
	return x+b+c;
}