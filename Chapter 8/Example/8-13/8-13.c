//ָ����m��Ԫ����ɵ�һά�����ָ�����
#include<stdio.h>
int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{9,11,13,15}};
	int (*p)[4],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]=%2d ",i,j,a[i][j]);
		}
		printf("\n");
	}
	p=a;
	printf("�������к���");
	scanf("%d,%d",&i,&j);
	printf("a[%d][%d]=%d\n",i,j,*(*(p+i)+j));
	printf("a[%d][%d]=%d\n",i,j,(*(p+i))[j]);
}