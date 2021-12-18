/*
初始化学生成绩
并设计函数，求：
1.每一门课的平均成绩
2.每个学生的总成绩
3.任意学生的各科成绩
*/
#include<stdio.h>
int main()
{
	void EveSAver(float *a,int n,int s);
	void SumScore(float *a,int n,int s);
	void EveStudt(float *a,int n,int s,int t);
	int N,S,i=0,j=0,t;
	float score[3][4]={{89.5,77,97,59.5},{66,78,69.5,88},{90,60,88.5,76}};
	printf("请输入学生数N和课程数S:");
	scanf("%d %d",&N,&S);
	/*
	for(i=0;i<N;i++)
	{
		printf("请输入第%d个学生的各科成绩:",i+1);

		for(j=0;j<S;j++)
		{
			scanf("%f",&score[i][j]);
		}
	}
	*/
	for(i=0;i<N;i++)
	{
		for(j=0;j<S;j++)
		{
			printf("%5.2f\t",score[i][j]);
		}
		printf("\n");
	}
	printf("\n请选择查看的学生:");
	scanf("%d",&t);
	EveStudt(*score,N,S,t);
	SumScore(*score,N,S);
	EveSAver(*score,N,S);
}
void EveStudt(float *a,int n,int s,int t)
{

	float *p;
	printf("\nNo.%d的各科成绩为:\n\n语文\t数学\t英语\t体育\n",t);
	t=t-1;
	for(p=(a+t*s);p<(a+t*s+s);p++)
		printf("%5.2f\t",*p);
	printf("\n");
}
void SumScore(float *a,int n,int s)
{
	float suma[3];
	float *p=a,sum;
	int i=0,j=0;
	for(;i<n;i++)
	{
		sum=0;
		for(p=a+i*s;p<(a+i*s+s);p++)
			sum+=*p;
		suma[i]=sum;
	}
	printf("\n每个学生的总成绩为:\n\nNo.1\tNo.2\tNo.3\n");
	for(i=0;i<n;i++)
		printf("%5.2f\t",suma[i]);
	printf("\n");
}
void EveSAver(float *a,int n,int s)
{
	float avea[4];
	float *p=a,ave;
	int i=0,j=0;
	for(;j<s;j++)
	{
		ave=0;
		for(p=a+j;p<=(a+(n-1)*s+j);p=p+s)
		{
			//printf("%5.2f ",*p);
			ave+=*p;
		}
		avea[j]=ave/n;
	}
	printf("\n每一门课的平均成绩为:\n\n语文\t数学\t英语\t体育\n");
	for(j=0;j<s;j++)
		printf("%5.2f\t",avea[j]);
	printf("\n");
}