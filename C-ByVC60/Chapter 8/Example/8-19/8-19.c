#include<stdio.h>
int main()
{
	char a[]="I am a Student.",b[20],*p1=a,*p2=b;
	for(;*p1!='\0';p1++,p2++)  //�мǴ�ʱ*p1�ʹ���ÿ��Ԫ��
		*p2=*p1;
	*p2='\0';
	printf("%s\n",a);
	printf("%s\n",b);
}