#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	unsigned char c;
	unsigned short price1=-1;
	unsigned short price2=50;
	printf("%d\n\n",price1);
	printf("%u\n\n",price2);

	printf("���ASII��\n");
	for(i=0;i<225;i++)
	{
		c=i;
		printf("%d %c\t",c,c);
	}

	printf("\n\nshort %d �ֽ�  %d��\n",sizeof(short),sizeof(short)*8);
	printf("int     %d �ֽ�  %d��\n",sizeof(int),sizeof(int)*8);
	printf("long    %d �ֽ�  %d��\n",sizeof(long),sizeof(long)*8);
	//printf("long long=%d �ֽ�\n",sizeof(long long int);
	printf("float   %d �ֽ�  %d��\n",sizeof(float),sizeof(float)*8);
	printf("double  %d�ֽ�   %d��\n",sizeof(double),sizeof(double)*8);
	printf("long double  %d�ֽ�   %d��\n",sizeof(long double),sizeof(long double)*8);
	printf("char    %d �ֽ�  %d��\n",sizeof(float),sizeof(float)*8);

	getch();
	return 0;
}