//爱因斯坦数学题
#include<stdio.h>
int main()
{
	int x=7;
	int ContinueWay();
	while(x<=20000)
	{
		do{
			x++;
		}
		while((x%2!=1)||(x%3!=2)||(x%5!=4)||(x%6!=5)||(x%7!=0));
		printf("%d\t",x);
	}
	ContinueWay();
}

int ContinueWay()
{
	int n=7;
	do{
		if(n%2!=1){n++;continue;}
		if(n%3!=2){n++;continue;}
		if(n%5!=4){n++;continue;}
		if(n%6!=5){n++;continue;}
		if(n%7!=0){n++;continue;}
		break;
	}while(1);
	printf("\n台阶总共为:%d \n",n);
}
