/*����ĳ���Ƿ�ͬʱ��3��5����*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int N;
	void FlagWay(int n);
	void Way2(int n);
	printf("��������Ҫ���Ե�����\nN=");
	scanf("%d",&N);
	Way2(N);
	FlagWay(N);
	getch();
	return 0;
}

/*ֱ�ӷ��ⶨ*/
void Way2(int n)
{
	if((n%3==0)&&(n%5==0))
		printf("%d�ܱ�3��5ͬʱ����\n\n",n);
	else printf("%d���ܱ�3��5ͬʱ����\n\n",n);
}

/*��־���ⶨ*/
void FlagWay(int n)	
{
	int flag=0;
	if(n%3!=0) {flag=-1;printf("%d���ܱ�3����\n",n);}
	if(n%5!=0) {flag=-1;printf("%d���ܱ�5����\n",n);}

	if(flag==0)
		printf("%d�ܱ�3��5ͬʱ����\n",n);
	else
		printf("%d���ܱ�3��5ͬʱ����\n",n);
}