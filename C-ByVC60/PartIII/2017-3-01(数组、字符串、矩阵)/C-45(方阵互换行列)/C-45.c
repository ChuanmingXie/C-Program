#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={11,12,13,14,15,16,17,18,19},i=0,j=0;
	//初始显示
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)printf("%3d\t",a[i][j]);
		printf("\n"); }
	printf("\n");
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)printf("%3d\t",b[i][j]);
		printf("\n"); }


	//调整
	for(i=0;i<3;i++)
	{
		b[i][0]=a[2][i];
		a[0][i]=b[i][2];
	}
	printf("\n");


	//再输出
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)printf("%3d\t",a[i][j]);
		printf("\n"); }
	printf("\n");
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)printf("%3d\t",b[i][j]);
		printf("\n"); }


	getch();
}