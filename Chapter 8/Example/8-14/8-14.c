/*
��ʼ��ѧ���ɼ�
����ƺ�������
1.ÿһ�ſε�ƽ���ɼ�
2.ÿ��ѧ�����ܳɼ�
3.����ѧ���ĸ��Ƴɼ�
*/
#include<stdio.h>
int main()
{
	void EveSAver(float *a,int n,int s);
	void SumScore(float *a,int n,int s);
	void EveStudt(float *a,int n,int s,int t);
	int N,S,i=0,j=0,t;
	float score[3][4]={{89.5,77,97,59.5},{66,78,69.5,88},{90,60,88.5,76}};
	printf("������ѧ����N�Ϳγ���S:");
	scanf("%d %d",&N,&S);
	/*
	for(i=0;i<N;i++)
	{
		printf("�������%d��ѧ���ĸ��Ƴɼ�:",i+1);

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
	printf("\n��ѡ��鿴��ѧ��:");
	scanf("%d",&t);
	EveStudt(*score,N,S,t);
	SumScore(*score,N,S);
	EveSAver(*score,N,S);
}
void EveStudt(float *a,int n,int s,int t)
{

	float *p;
	printf("\nNo.%d�ĸ��Ƴɼ�Ϊ:\n\n����\t��ѧ\tӢ��\t����\n",t);
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
	printf("\nÿ��ѧ�����ܳɼ�Ϊ:\n\nNo.1\tNo.2\tNo.3\n");
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
	printf("\nÿһ�ſε�ƽ���ɼ�Ϊ:\n\n����\t��ѧ\tӢ��\t����\n");
	for(j=0;j<s;j++)
		printf("%5.2f\t",avea[j]);
	printf("\n");
}