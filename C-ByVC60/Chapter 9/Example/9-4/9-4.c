#include<stdio.h>
struct Student{
	int num;
	char name[20];
	float score;
};
int main()
{
	struct Student stu[5]={
		{10101,"zhang cheng",89},
		{10102,"huang qujin",39.4},
		{10103,"dou qingwen",65},
		{10104,"xu shaoqing",78.5},
		{10105,"xie chuanmi",95},
	};

	struct Student temp;
	const int n=5;
	int i,j;
	printf("The order is:\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(stu[j].score>stu[i].score)
			{
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%8d%15s%10.2f\n",stu[i].num,stu[i].name,stu[i].score);
	}

}