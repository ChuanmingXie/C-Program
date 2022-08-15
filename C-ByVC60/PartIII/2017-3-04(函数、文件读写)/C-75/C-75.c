#include<stdio.h>
float g(int s[], int n);

int main()
{
	int stu[80],i=0,c=0;
	printf("请输入学生个数:");
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		printf("第 %3d 个成绩为",i+1);
		scanf("%d",&stu[i]);
	}

	printf("学生平均成绩为:%g\n",g(stu,c));
}

float g(int s[], int n)
{
	int i=0;
	float p=0;
	for(;i<n;i++)
	{
		p+=s[i];
	}
	return p/n;
}