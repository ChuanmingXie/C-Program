#include<stdio.h>
int main()
{
	int i=0,j=0,Stu=1;
	float Sco=0, ave=0;

	for(i=1;i<=6;i++)
	{
		ave=0;
		for(j=1;j<=5;j++)
		{
			printf("������� %d ��ѧ���ĵ� %d �ſεĳɼ�:",i,j);
			scanf("%f",&Sco);
			ave+=Sco;
		}
		printf("�� %d ��ѧ����ƽ���ɼ�Ϊ %g: \n",i,ave/5);
	}
}
