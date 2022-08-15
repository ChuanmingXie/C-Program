#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n=500,sum=0,w=0;
	while(n>1)
	{
		i=2;
		while(i<=sqrt(n))
		{
			if(n%i==0)
				i=n;
			else i++;
		}
		if(i<n)
		{
			if(w++<10)
			{
				printf("第%2d个最大值为%4d\t",w,n);
				sum+=n;
				printf("sum=%4d\n",sum);
			}
		}
		//else ++n;    此处没有else，++n不是选择语句里的！！！
		n--;
	}
	getch();
}