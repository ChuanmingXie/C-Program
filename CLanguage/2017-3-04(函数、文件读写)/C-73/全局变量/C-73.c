#include<stdio.h>
int x,y;
void swap();
int main()
{
	printf("����Ҫ������ֵ:");
	scanf("x=%d,y=%d",&x,&y);
	swap();
	printf("����������ֵ:x=%d,y=%d\n",x,y);
}
 
void swap()
{
	int t;
	t=x;x=y;y=t;
}