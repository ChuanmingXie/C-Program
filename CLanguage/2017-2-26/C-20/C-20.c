#include<stdio.h>
int main()
{
	int n,i,m,min;
	printf("请输入要输入的个数:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n请输入的第%d个数\t",i);
		scanf("%d",&m);
		if(i==1)min=m;
		if(m<min)min=m;
	}
	printf("\nmin=%d\n",min);
}