#include<stdio.h>
int main()
{
	int n,i,m,min;
	printf("������Ҫ����ĸ���:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n������ĵ�%d����\t",i);
		scanf("%d",&m);
		if(i==1)min=m;
		if(m<min)min=m;
	}
	printf("\nmin=%d\n",min);
}