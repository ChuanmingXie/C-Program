#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 5
#define M 10
int i,j;
/*1.三阶二维矩阵转置---二级函数*/
void Scanf(int a[][N],int n)
{
	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
			scanf("%d",&a[i][j]);
}

void Print(int a[][N],int n)
{
	for(i=0;i<n;++i){
		for(j=0;j<n;++j)
			printf("%3d",a[i][j]);
		printf("\n");
	}
}

void convert(int a[][N],int n)
{
	int t;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
}


/*2.十名学生成绩统计---二级函数*/
void Input_Score(double a[M][N],int m,int n)
{
	for(i=0;i<m;++i)
	{
		printf("请输入学生No.%2d各科成绩:",i+1);
		for(j=0;j<n;++j)
			scanf("%lf",&a[i][j]);
	}
}
void Aver_stu(double a[M][N],int m,int n,double b[M])
{
	double s;
	for(i=0;i<m;++i)
	{
		s=0;
		for(j=0;j<n;++j)
			s+=a[i][j];
		b[i]=s/5.0;
	}
}
void Aver_cou(double a[M][N],int m,int n,double b[N])
{
	double s;
	for(i=0;i<n;++i)
	{
		s=0;
		for(j=0;j<m;++j)
			s+=a[j][i];
		b[i]=s/10.0;
	}
}
void Cou_High(double a[M][N],int m,int n,int p,int q,double h)
{
	h=a[0][0];
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			if(h<a[i][j])
			{
				h=a[i][j];
				p=i+1;
				q=j+1;
			}
		}
	}
	printf("\n\nhighest:%9.2lf(No.%2d,course%d)\n",h,p,q);
}
/*
先计算每个学生方差:
a[M][N]:原始数据
b[M]:平均值数据
c[M]:方差数据
c[i]=∑(j:0-4){(b[i]-a[i][j])*(b[i]-a[i][j])/5}
*/
void S_var(double a[M][N],int m,int n,double b[M],double c[M])
{
	double s;
	for(i=0;i<m;++i)
	{
		s=0;
		for(j=0;j<n;++j)
		{
			s+=(b[i]-a[i][j])*(b[i]-a[i][j]);
		}
		c[i]=sqrt(s/5.0);
	}
}
void OuPut_Score(double a[M][N],int m,int n,double b[M],double c[N],double d[M])
{
	printf("\n    No.     course1  course2  course3  course4  course5   Aver    Varian\n");
	for(i=0;i<m;++i)
	{
		printf("No.%4d:",i+1);
		for(j=0;j<n;++j)
			printf("%9.2lf",a[i][j]);
		printf("%9.2lf%9.2lf\n",b[i],d[i]);
	}
	printf("Average:");
	for(i=0;i<n;++i)
		printf("%9.2lf",c[i]);
}


/*十名员工对应查找----二级函数*/
void Input_info(char w_id[][8],char w_name[][8],int m)
{
	for(i=0;i<m;++i)
	{
		printf("请输入工号NO .:");
		scanf("%s",w_id[i]);		//scanf("%c",&w_id[i]);
		printf("请输入姓名Name:");
		scanf("%s",w_name[i]);		//gets(w_name[i]);
	}
}
void Sort_infos(char w_id[][8],char w_name[][8],int m)
{
	char t_id[8],t_name[8];
	for(i=0;i<m;++i)
	{
		for(j=i+1;j<m;++j)
		{
			if(strcmp(w_id[i],w_id[j])>0)
			{
				strcpy(t_id,w_id[i]);strcpy(w_id[i],w_id[j]);strcpy(w_id[j],t_id);
				strcpy(t_name,w_name[i]);strcpy(w_name[i],w_name[j]);strcpy(w_name[j],t_name);
			}
		}
	}

	printf("  工号		姓名\n");
	for(i=0;i<m;++i)
		printf("%8s%12s\n",w_id[i],w_name[i]);
}

void Search_wor(char id[8],char w_id[][8],char w_name[][8],int m)
{
	int top=0,bott=M-1,mid,local=0,sign=1;
	if(strcmp(id,w_id[top])<0||strcmp(id,w_id[bott])>0)
		local=-1;
	while((sign==1)&&(top<=bott))
	{
		mid=(bott+top)/2;
		if(strcmp(id,w_id[mid])==0)
		{
			local=mid;
			printf("工号为:N0. %s的员工姓名:%s.\n",id,w_name[local]);
			sign=-1;
		}
		else if(strcmp(id,w_id[mid])<0)
			bott=mid-1;
		else
			top=mid+1;
	}
	if(sign==1||local==-1)
		printf("没有工号为:NO. %s的员工\n",id);
}