/*利用矩阵处理多组数据的工程*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define N 5
#define M 10

void MatrixConvert();	/*1.三阶二维矩阵转置*/
void StudentScores();	/*2.十名学生成绩统计*/
void WorkersNameNo();	/*3.十名员工对应点名*/

void Clrscr();			/*小小的清屏函数*/

int main()
{
	char str[20];
	printf("---------1.三阶二维矩阵转置---------\n");
	printf("---------2.十名学生成绩统计---------\n");
	printf("---------3.十名员工对应点名---------\n");
	printf("---------------0.EXIT---------------\n");
	printf("请输入您要查看的算法序号No=");scanf("%s",str);
	while(str[0]<'0'&&str[0]>'3'){
	printf("您的输入有误确认输入序号No=");scanf("%s",str);
	}
	switch(str[0]){
	case '0':getch();break;
	case '1':MatrixConvert();break;
	case '2':StudentScores();break;
	case '3':WorkersNameNo();break;
	}
	return 0;
}
void Clrscr(){
	if(getch())
		system("CLS");
}

void MatrixConvert()
{
	void convert(int a[][N],int n);
	void Scanf(int a[][N],int n);
	void Print(int a[][N],int n);
	int array[N][N];

	printf("输入数据:\n");Scanf(array,N);
	printf("原始矩阵:\n");Print(array,N);
	convert(array,N);printf("\n");
	printf("转置矩阵:\n");Print(array,N);

	Clrscr();
	main();
}


void StudentScores()
{
	void Input_Score(double a[M][N],int m,int n);
	/*十名学生平均成绩*/
	void Aver_stu(double a[M][N],int m,int n,double b[M]);
	/*五门课程平均成绩*/
	void Aver_cou(double a[M][N],int m,int n,double b[N]);
	/*计算每名学生标准差*/
	void S_var(double a[M][N],int m,int n,double b[M],double c[M]);
	void Cou_High(double a[M][N],int m,int n,int p,int q,double h);
	void OuPut_Score(double a[M][N],int m,int n,double b[M],double c[N],double d[M]);
	double score[M][N],aver_stu[M],aver_Cou[N],Var_stu[M],h=0;
	int r=0,c=0;

	Input_Score(score,M,N);
	Aver_stu(score,M,N,aver_stu);
	Aver_cou(score,M,N,aver_Cou);
	S_var(score,M,N,aver_stu,Var_stu);
	OuPut_Score(score,M,N,aver_stu,aver_Cou,Var_stu);
	Cou_High(score,M,N,r,c,h);

	Clrscr();
	main();
}

void WorkersNameNo()
{
	void Input_info(char w_id[][8],char w_name[][8],int m);
	void Sort_infos(char w_id[][8],char w_name[][8],int m);
	void Search_wor(char id[8],char w_id[][8],char w_name[][8],int m);
	char Worker_Name[M][8],Worker_Id[M][8],worker_id[8],c;int flag=1;

	Input_info(Worker_Id,Worker_Name,M);
	Sort_infos(Worker_Id,Worker_Name,M);
	do{
		printf("请输入员工号 NO. :");scanf("%s",worker_id);
		Search_wor(worker_id,Worker_Id,Worker_Name,M);
		printf("是否继续查找(Y/N):");
		scanf(" %c",&c);		/*记住前面加空格*/
		while((c!='N'&&c!='n'&&c!='Y'&&c!='y')){
			printf("您的输入有误(Y/N):");
			scanf(" %c",&c);
		}
		if(c=='N'||c=='n')
			flag=0;
	}while(flag);

	Clrscr();
	main();
}