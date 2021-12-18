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

	printf("输出ASII码\n");
	for(i=0;i<225;i++)
	{
		c=i;
		printf("%d %c\t",c,c);
	}

	printf("\n\nshort %d 字节  %d字\n",sizeof(short),sizeof(short)*8);
	printf("int     %d 字节  %d字\n",sizeof(int),sizeof(int)*8);
	printf("long    %d 字节  %d字\n",sizeof(long),sizeof(long)*8);
	//printf("long long=%d 字节\n",sizeof(long long int);
	printf("float   %d 字节  %d字\n",sizeof(float),sizeof(float)*8);
	printf("double  %d字节   %d字\n",sizeof(double),sizeof(double)*8);
	printf("long double  %d字节   %d字\n",sizeof(long double),sizeof(long double)*8);
	printf("char    %d 字节  %d字\n",sizeof(float),sizeof(float)*8);

	getch();
	return 0;
}