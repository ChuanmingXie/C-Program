#include<stdio.h>
#include<string.h>
int main()
{
	int *p1,*p2,*p,a,b;
	printf("��������������:");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b)
	{
		p=p1;p1=p2;p2=p;			//ָ�뽻���ˣ���a��b����ֵ��û�б�
	}
	printf("a=%d\tb=%d\n",a,b);		//�������Ϊ*p1ʼ��ָ��ϴ����ֵ
	printf("Max=%d\tMin=%d\n",*p1,*p2);
	printf("Max�ĵ�ַΪ:%o,Min�ĵ�ַΪ:%o\n",p1,p2);
	printf("Max�ĵ�ַΪ:%d,Min�ĵ�ַΪ:%d\n",p1,p2);
	printf("Max�ĵ�ַΪ:%x,Min�ĵ�ַΪ:%x\n",p1,p2);
}