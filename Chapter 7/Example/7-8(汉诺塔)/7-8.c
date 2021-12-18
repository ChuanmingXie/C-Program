#include<stdio.h>
int main()
{
	void hanoi(int n,char One,char Two,char Three);
	int m;
	printf("请输入盘子:");
	scanf("%d",&m);
	printf("这%d个盘子的移动情况如下:\n");

	hanoi(m,'A','B','C');
}
void hanoi(int n,char One,char Two,char Three)
{
	void move(char,char);
	if(n==1)
		move(One,Three);
	else
	{
		hanoi(n-1,One,Three,Two);
		move(One,Three);
		hanoi(n-1,Two,One,Three);
	}
}
void move(char x,char y)
{
	printf("%c->%c\t",x,y);
}
