#include<stdio.h>
int main()
{
	int m=0,n=0,x=0,y=0,i=0;
	printf("��������㷶Χm,n(m<n):");
	scanf("%d,%d",&m,&n);
	
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
			y+=i;
		else
			x+=i;
	}
	printf("����֮��x=%d\nż��֮��y=%d\n",x,y);
}