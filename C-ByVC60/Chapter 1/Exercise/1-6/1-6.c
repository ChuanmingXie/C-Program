/*�������֮�������*/

#include <stdio.h>

int main()
{
	int Max(int x,int y,int z);    //��������
	
	int a,b,c;
	printf("�������������:\n");
	scanf("%d,%d,%d",&a,&b,&c);    //�ǵ���%d֮��ӡ�����
	printf("Max is %d\n",Max(a,b,c));
	return 0;
}

int Max(int x,int y,int z)
{
	int M=x;
	if(M<y)  M=y;
	if(M<z)  M=z;
	return M;
}