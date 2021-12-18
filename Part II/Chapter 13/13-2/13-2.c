#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#define SIZE 300

typedef struct student{
	int number;
	int score[3];
}Student;

typedef enum boolen{
	False,True
}Flag;

int accpet_data(Student stu[],int grade[])
{
	int i=0,sum=0,temp,a1,a2;
	Flag flag;
	printf("\n请输入计算总成绩时使用的比例，用整数表示:");
	scanf("%d,%d",&a1,&a2);
	while(i<SIZE)
	{
		printf("\n请输入学号");
		scanf("%d",&stu[i].number);
		if(stu[i].number==-1)
		{
			sum=i;
			break;
		}
		printf("\n请输入学生的平时成绩和期末成绩");
		flag=True;
		while(flag==True)
		{
			scanf("%d %d",&stu[i].score[0],&stu[i].score[1]);
			if(stu[i].score[0]<=100&&stu[i].score[0]>=0&&stu[i].score[1]<=100&&stu[i].score[1]>=0)
				flag=False;
			else
				printf("\n错误数据！请再次输入该学生的平时成绩和期末成绩:");
		}
		temp=(int)(1.0*a1/100*stu[i].score[0]+1.0*a2/100*stu[i].score[1]);
		stu[i].score[2]=temp;
		temp=(stu[i].score[2])/10;
		if(temp==10)
			grade[10]++;
		else
			grade[temp+1]++;
		i++;
	}
	return sum;
}

void show_data(Student stu[],int sum,int grade[])
{
	int i,j;
	for(i=0;i<sum;i++)
	{
		printf("%4d",stu[i].number);
		for(j=0;j<3;j++)
			printf("%4d",stu[i].score[j]);
		printf("\n");
	}
	for(i=1;i<=10;i++)
		printf(" %d",grade[i]);
}


void count(int *max,int *min,double *pass,double ave[],double f[],Student stu[],int sum)
{
	int i,j,p_sum=0;
	int total[3];
	double temp;
	*max=*min=stu[0].score[2];
	if(stu[0].score[2]>=60)
		p_sum++;
	for(i=1;i<sum;i++)
	{
		if(stu[i].score[2]>*max)
			*max=stu[i].score[2];
		if(stu[i].score[2]<*min)
			*min=stu[i].score[2];
		if(stu[i].score[2]>=60)
			p_sum++;
	}
	*pass=(1.0*p_sum/sum)*100;
	for(i=0;i<3;i++)
	{
		total[i]=0;
		for(j=0;j<sum;j++)
		{
			total[i]+=stu[j].score[i];//所有学生的三类总成绩。
		}
		ave[i]=total[i]/sum;
	}
	for(i=0;i<3;i++)
	{
		f[i]=0;
		for(j=0;j<sum;j++)
		{
			temp=stu[j].score[i]-ave[i];
			f[i]+=temp*temp;
		}
		f[i]=sqrt(fabs(f[i])/sum);
	}
}

void show_data2(int max,int min,double pass,double ave[],double f[])
{
	int i;
	char str1[3][20]={"平时成绩平均分","期末成绩平均分","总成绩平均分"};
	char str2[3][20]={"平时成绩标准差","期末成绩标准差","总成绩标准差"};
	printf("\n及格率=%6.2f%%	最高分=%d	最低分=%d\n",pass,max,min);
	for(i=0;i<3;i++)
		printf("\n%s=%6.2f	%s=%6.2f\n",str1[i],ave[i],str2[i],f[i]);
}

void draw(int grade[])
{
	int i,j,max,temp,x,y;
	char screen[22][44];
	printf("\n模拟直方图\n");
	max=0;
	for(i=1;i<=10;i++)
	{
		if(grade[i]>max)
			max=grade[i];
	}
	for(i=1;i<=10;i++)
		grade[i]=(int)(20.0*grade[i]/max+0.5);
	for(i=0;i<=21;i++)
		for(j=0;j<=41;j++)
			screen[i][j]=0;
	for(i=0;i<=41;i++)
		screen[21][i]='-';
	screen[21][41]='X';
	screen[0][0]='Y';
	for(i=1;i<=21;i++)
		screen[i][0]='|';
	
	y=1;
	for(x=1;x<=10;x++,y=y+4)
	{
		temp=grade[x];
		if(temp!=0)
			for(i=1;i<=temp;i++)
			{
				for(j=1;j<=4;j++)
					screen[20-i+1][j+y]='*';
			}
	}

	for(i=0;i<=21;i++)
	{
		for(j=0;j<=41;j++)
			if(screen[i][j]!=0)
				printf("%c",screen[i][j]);
			else
				printf(" ");
		printf("\n");
	}
	printf("0  10  20  30  40  50  60  70  80  90  100\n");
}

int main()
{
	int sum,max,min;
	double pass=0;
	int grade[11]={0};
	Student stu[SIZE];
	double ave[SIZE],f[SIZE];
	sum=accpet_data(stu,grade);
	show_data(stu,sum,grade);
	draw(grade);
	count(&max,&min,&pass,ave,f,stu,sum);
	show_data2(max,min,pass,ave,f);
	getch();
	return 0;
}