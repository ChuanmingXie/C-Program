/*���������������(��򵥵Ĳ�������)*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	int x=0;
	printf("��������������,�Կո��ʶ\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("����ǰ:%d %d %d\n",a,b,c);
	if(a<b)		x=a,a=b,b=x;				//�Ƚ�ǰ����������,��������a��

	if(a<c)		printf("�����:%d %d %d\n",c,a,b);	//�ڶ����һ��������,����a����ǰ��

	else 
		if(c>b)	printf("�����:%d %d %d\n",a,c,b);	//������b���м�

		else 	printf("�����:%d %d %d\n",a,b,c);	//С��b�����
	getch();

	return 0;
}