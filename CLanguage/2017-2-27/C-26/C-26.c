/*ʵ��Ŀ�꣺
/��һ�죺2
�ڶ��죺2*2
�����죺2*2*2
...*/

#include<stdio.h>
int main()
{
	int e=1,d=0;
	double s=0;
	do{
		d++;
		e*=2;
		s+=e;
		printf("�� %d ������ %d ��ƻ�������� %g \n",d,e,e*0.8);
		printf("С�ƣ�%g ��\n",s);
	}while(s<100);
	printf("�ܹ�����: %g ��ƻ��,�ܹ�����:%g Ԫ,ÿ��ƽ������:%g Ԫ\n",s,s*0.8,s*0.8/d);
}

