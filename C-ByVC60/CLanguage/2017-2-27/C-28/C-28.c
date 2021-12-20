#include<stdio.h>
int main()
{
	int i=0,j=0,Stu=1;
	float Sco=0, ave=0;

	for(i=1;i<=6;i++)
	{
		ave=0;
		for(j=1;j<=5;j++)
		{
			printf("请输入地 %d 个学生的第 %d 门课的成绩:",i,j);
			scanf("%f",&Sco);
			ave+=Sco;
		}
		printf("第 %d 个学生的平均成绩为 %g: \n",i,ave/5);
	}
}
