/*���þ�����������ݵĹ���*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define N 5
#define M 10

void MatrixConvert();	/*1.���׶�ά����ת��*/
void StudentScores();	/*2.ʮ��ѧ���ɼ�ͳ��*/
void WorkersNameNo();	/*3.ʮ��Ա����Ӧ����*/

void Clrscr();			/*СС����������*/

int main()
{
	char str[20];
	printf("---------1.���׶�ά����ת��---------\n");
	printf("---------2.ʮ��ѧ���ɼ�ͳ��---------\n");
	printf("---------3.ʮ��Ա����Ӧ����---------\n");
	printf("---------------0.EXIT---------------\n");
	printf("��������Ҫ�鿴���㷨���No=");scanf("%s",str);
	while(str[0]<'0'&&str[0]>'3'){
	printf("������������ȷ���������No=");scanf("%s",str);
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

	printf("��������:\n");Scanf(array,N);
	printf("ԭʼ����:\n");Print(array,N);
	convert(array,N);printf("\n");
	printf("ת�þ���:\n");Print(array,N);

	Clrscr();
	main();
}


void StudentScores()
{
	void Input_Score(double a[M][N],int m,int n);
	/*ʮ��ѧ��ƽ���ɼ�*/
	void Aver_stu(double a[M][N],int m,int n,double b[M]);
	/*���ſγ�ƽ���ɼ�*/
	void Aver_cou(double a[M][N],int m,int n,double b[N]);
	/*����ÿ��ѧ����׼��*/
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
		printf("������Ա���� NO. :");scanf("%s",worker_id);
		Search_wor(worker_id,Worker_Id,Worker_Name,M);
		printf("�Ƿ��������(Y/N):");
		scanf(" %c",&c);		/*��סǰ��ӿո�*/
		while((c!='N'&&c!='n'&&c!='Y'&&c!='y')){
			printf("������������(Y/N):");
			scanf(" %c",&c);
		}
		if(c=='N'||c=='n')
			flag=0;
	}while(flag);

	Clrscr();
	main();
}