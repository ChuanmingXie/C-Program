#include<stdio.h>
int main()
{
	int n,m,k=1;
	printf("请输入分解数n:");
	scanf("%d",&n);
	for(m=2;m<=n;m++)
	{
		if(n%m==0)
		{
			if(k==1) printf("%d",m);
			else printf("*%d",m);
			k++;
			n/=m;
			m--;
			continue;
		}
	}
	printf("\n");
}