t	2	1*2	1*2*2	1*2*3	1*2*3*4	1*2*3*4*5
i	1	2	3	4	5	6

//计算5的阶乘

#include <stdio.h>
int main()
{
	int i=1;
	int t=2;
	while(i<=5)
	{
		t=t*i;
		i=i+1;
	}
	printf("%d\n",t);
	return 0;
}
