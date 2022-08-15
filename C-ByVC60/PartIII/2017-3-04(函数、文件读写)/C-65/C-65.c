#include<stdio.h>
int main()
{
	void f(int n);
	int i=0;
	for(i=200;i<=5000;i++)
	f(i);

	getch();
}
void f(int n)
{
	static int p=0,m=0;
	if(n%4==1&&n%5==3&&n%7==4)
	{
		p++;
		printf("%6d",n);
		m=1;
	}
	else m=0;
	if(p%6==0&&m==1)printf("\n");
}