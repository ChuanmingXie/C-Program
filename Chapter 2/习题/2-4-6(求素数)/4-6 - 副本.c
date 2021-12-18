/*求编址允许情况下，求给定区间的素数*/
#include<stdio.h>
#include<conio.h>		/*与getch()有关*/
#include<math.h>

int main()
{
	/*变量声明部分*/
	int a=0,b=0;
	/*函数声明部分*/
	void PrimeNum1(int x,int y);
	/*数据输入部分*/
	printf("请输入素数的筛选区间:\n[a,b]=");
	scanf("%d,%d",&a,&b);
	/*函数调用部分*/
	printf("\n方法1.1:两层for循环法\n");
	PrimeNum1(a,b);printf("\n\n");
	/*按任意键关闭黑窗口*/
	getch();
	return 0;
}
/*解法1.1:有效地平方求解法——"两层for循环"+"break跳出"*/
void PrimeNum1(int x,int y)
{
	int i=0,p=0; 
	for(;x<=y;x++) 
	{ 
		for(i=2;i<=sqrt(x);i++)
			if(x%i==0) break; 
		if(i>sqrt(x)&&(x!=1)){		/*等号不取，加入等号会筛选出1、3、5、7、11、13、17、19...的平方
									等错误答案，而这些显然不是素数。x!=1，是对操作人员从1开始取数的容错处理*/
			printf("%4d ",x);		/*对筛选出来的素数按每行8个元素打印*/
			if(++p%8==0)	printf("\n");
		}
	}
}
