#include<stdio.h>
int main()
{
	//��������
	float x;
	char op;
	float AmountMoney(float m,char c);
	//��Ϣ˵��
	printf("�������˵����\n");
	printf("A----�����µ���ϢΪ------1.71%%----\n");
	printf("B----��  �����ϢΪ------1.98%%----\n");
	printf("C----һ  �����ϢΪ------2.25%%----\n");
	printf("D----��  �����ϢΪ------2.79%%----\n");
	printf("E----��  �����ϢΪ------3.33%%----\n");
	printf("F----��  �����ϢΪ------3.60%%----\n\n");
	//������ֵ
	printf("������Ԥ����|�������(A|B|C|D|E|F):");
	scanf("%f|%c",&x,&op);
	//��������
	if(x>0&&op>='A'&&op<='F')
		printf("���ı�����Ϊ%fԪ\n",AmountMoney(x,op));
	else
		printf("��������!\n");
}

float AmountMoney(float m,char c)
{
	switch(c)
	{
	case 'A':m=m*(1+1.71/100/4);break;
	case 'B':m=m*(1+1.98/100/2);break;
	case 'C':m=m*(1+2.25/100);break;
	case 'D':m=m*(1+2.79/100*2);break;
	case 'E':m=m*(1+3.33/100*3);break;
	case 'F':m=m*(1+3.60/100*5);break;
	default :m=0;
	}
	return m;
}