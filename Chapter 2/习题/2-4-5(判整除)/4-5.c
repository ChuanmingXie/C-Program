/*测试某数是否同时被3，5整除*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int N;
	void FlagWay(int n);
	void Way2(int n);
	printf("请输入需要测试的数据\nN=");
	scanf("%d",&N);
	Way2(N);
	FlagWay(N);
	getch();
	return 0;
}

/*直接法测定*/
void Way2(int n)
{
	if((n%3==0)&&(n%5==0))
		printf("%d能被3和5同时整除\n\n",n);
	else printf("%d不能被3和5同时整除\n\n",n);
}

/*标志法测定*/
void FlagWay(int n)	
{
	int flag=0;
	if(n%3!=0) {flag=-1;printf("%d不能被3整除\n",n);}
	if(n%5!=0) {flag=-1;printf("%d不能被5整除\n",n);}

	if(flag==0)
		printf("%d能被3和5同时整除\n",n);
	else
		printf("%d不能被3和5同时整除\n",n);
}