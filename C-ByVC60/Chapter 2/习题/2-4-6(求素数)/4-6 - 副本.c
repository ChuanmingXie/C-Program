/*���ַ��������£���������������*/
#include<stdio.h>
#include<conio.h>		/*��getch()�й�*/
#include<math.h>

int main()
{
	/*������������*/
	int a=0,b=0;
	/*������������*/
	void PrimeNum1(int x,int y);
	/*�������벿��*/
	printf("������������ɸѡ����:\n[a,b]=");
	scanf("%d,%d",&a,&b);
	/*�������ò���*/
	printf("\n����1.1:����forѭ����\n");
	PrimeNum1(a,b);printf("\n\n");
	/*��������رպڴ���*/
	getch();
	return 0;
}
/*�ⷨ1.1:��Ч��ƽ����ⷨ����"����forѭ��"+"break����"*/
void PrimeNum1(int x,int y)
{
	int i=0,p=0; 
	for(;x<=y;x++) 
	{ 
		for(i=2;i<=sqrt(x);i++)
			if(x%i==0) break; 
		if(i>sqrt(x)&&(x!=1)){		/*�ȺŲ�ȡ������ȺŻ�ɸѡ��1��3��5��7��11��13��17��19...��ƽ��
									�ȴ���𰸣�����Щ��Ȼ����������x!=1���ǶԲ�����Ա��1��ʼȡ�����ݴ���*/
			printf("%4d ",x);		/*��ɸѡ������������ÿ��8��Ԫ�ش�ӡ*/
			if(++p%8==0)	printf("\n");
		}
	}
}
