/*求存储字长允许情况下，求给定区间的素数*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>		/*与getch()有关*/
#include<math.h>

int main()
{
	/*变量声明部分*/
	int a=0,b=0;
	/*函数声明部分*/
	void PrimeNum(int x,int y);
	void PrimeNum1(int x,int y);
	void PrimeNum2(int x,int y);
	/*数据输入部分*/
	printf("请输入素数的筛选区间:\n[a,b]=");
	scanf("%d,%d",&a,&b);
	/*函数调用部分*/
	printf("\n方法1.1:两层for循环法\n");PrimeNum1(a,b);printf("\n\n");
	printf("方法1.2:两层while循环法\n");PrimeNum2(a,b);printf("\n\n");
	PrimeNum(a,b);printf("\n\n");
	/*按任意键关闭界面*/
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

/*解法1.2:平方求解法——"两层while循环"(来自谭教授程序设计（第四版）学习辅导P10)*/
void PrimeNum2(int x,int y)
{
	int i=0,p=0;
	while(x<=y)
	{		
		i=2;
		while(i<=sqrt(x))
		{
			if((x%i)==0)	
				i=x;	
			else i++;
		}
		if(i<x||x==2){			/*x==2，是对操作人员从1开始取数的容错处理*/	
			printf("%4d ",x);	/*对筛选出来的素数按每行8个元素打印*/
			if(++p%8==0)	printf("\n");
		}
		++x;
	}
}

/*方法2.1:两层嵌套调用,步长为1的整体自增求解法*/
void PrimeNum(int x,int y)
{
	int i=0,p=0,k=0;
	int Prime(int n);
	int Prime1(int n);
	printf("方法2.1:步长为1的整体自增两层嵌套法\n");
	for(i=x;i<y;i++){
		if(Prime(i)&&(i!=1)){	/*i!=1，是对操作人员从1开始取数的容错处理*/	
			printf("%4d ",i);	/*对筛选出来的素数按每行8个元素打印*/
			if(++p%8==0)	printf("\n");
		}
	}
	printf("\n\n");

	printf("方法2.2:步长为1的低半区自增两层嵌套法\n");
	for(i=x;i<y;i++){
		if(Prime1(i)&&(i!=1)){	/*i!=1，是对操作人员从1开始取数的容错处理*/	
			printf("%4d ",i);	/*对筛选出来的素数按每行8个元素打印*/
			if(++k%8==0)	printf("\n");
		}
	}
}
int Prime(int n)
{
	int i=2;
	for(;i<n;i++)
		if(n%i==0)	return 0;
	return 1;
}
/*方法2.2:两层嵌套调用,步长为1的低半区自增求解法*/
int Prime1(int n)
{
	int i=2;
	for(;i<=n/2;i++)			/*等号要取，否则会筛选出4这个错误结果*/
		if(n%i==0)	return 0;
	return 1;
}