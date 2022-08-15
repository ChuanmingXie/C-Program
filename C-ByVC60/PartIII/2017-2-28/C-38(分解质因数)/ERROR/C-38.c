//分解质因数
#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n=1,x=0,s=1;
	printf("请输入x:");
	scanf("%d",&x);
	while(n<=x)
	{
		i=2;
		while(i<=sqrt(n))
		{
			if(n%i==0)i=n;
			else i++;
		}
		if(i<n)
		{
			printf("%3d\t",n);
			s*=n;
			printf("%d\n",s);
		}
		n++;
	}
}