#include<stdio.h>
int x,y;
void swap();
int main()
{
	printf("输入要交换的值:");
	scanf("x=%d,y=%d",&x,&y);
	swap();
	printf("输出交换后的值:x=%d,y=%d\n",x,y);
}
 
void swap()
{
	int t;
	t=x;x=y;y=t;
}