/*��洢�ֳ���������£���������������*/
#include<std io.h>
#include<stdlib.h>
#include<conio.h>		/*��getch()�й�*/
#include<math.h>

int main()
{
	/*������������*/
	int a=0,b=0;
	/*������������*/
	void PrimeNum(int x,int y);
	void PrimeNum1(int x,int y);
	void PrimeNum2(int x,int y);
	/*�������벿��*/
	printf("������������ɸѡ����:\n[a,b]=");
	scanf("%d,%d",&a,&b);
	/*�������ò���*/
	printf("\n����1.1:����forѭ����\n");PrimeNum1(a,b);printf("\n\n");
	printf("����1.2:����whileѭ����\n");PrimeNum2(a,b);printf("\n\n");
	PrimeNum(a,b);printf("\n\n");
	/*��������رս���*/
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

/*�ⷨ1.2:ƽ����ⷨ����"����whileѭ��"(����̷���ڳ�����ƣ����İ棩ѧϰ����P10)*/
void PrimeNum2(int x,int y)
{
	int i=0,p=0;
	while(x<=y)
	{		
		i=2;
		while(i<=sqrt(x))
		{
			if((x%i)==0)	
				i=x;	
			else i++;
		}
		if(i<x||x==2){			/*x==2���ǶԲ�����Ա��1��ʼȡ�����ݴ���*/	
			printf("%4d ",x);	/*��ɸѡ������������ÿ��8��Ԫ�ش�ӡ*/
			if(++p%8==0)	printf("\n");
		}
		++x;
	}
}

/*����2.1:����Ƕ�׵���,����Ϊ1������������ⷨ*/
void PrimeNum(int x,int y)
{
	int i=0,p=0,k=0;
	int Prime(int n);
	int Prime1(int n);
	printf("����2.1:����Ϊ1��������������Ƕ�׷�\n");
	for(i=x;i<y;i++){
		if(Prime(i)&&(i!=1)){	/*i!=1���ǶԲ�����Ա��1��ʼȡ�����ݴ���*/	
			printf("%4d ",i);	/*��ɸѡ������������ÿ��8��Ԫ�ش�ӡ*/
			if(++p%8==0)	printf("\n");
		}
	}
	printf("\n\n");

	printf("����2.2:����Ϊ1�ĵͰ�����������Ƕ�׷�\n");
	for(i=x;i<y;i++){
		if(Prime1(i)&&(i!=1)){	/*i!=1���ǶԲ�����Ա��1��ʼȡ�����ݴ���*/	
			printf("%4d ",i);	/*��ɸѡ������������ÿ��8��Ԫ�ش�ӡ*/
			if(++k%8==0)	printf("\n");
		}
	}
}
int Prime(int n)
{
	int i=2;
	for(;i<n;i++)
		if(n%i==0)	return 0;
	return 1;
}
/*����2.2:����Ƕ�׵���,����Ϊ1�ĵͰ���������ⷨ*/
int Prime1(int n)
{
	int i=2;
	for(;i<=n/2;i++)			/*�Ⱥ�Ҫȡ�������ɸѡ��4���������*/
		if(n%i==0)	return 0;
	return 1;
}