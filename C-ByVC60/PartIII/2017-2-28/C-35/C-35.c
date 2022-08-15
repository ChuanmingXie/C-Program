#include<stdio.h>
int main()
{
	int a=3,b=4,c=5,i=0;
	for(a=3;a<=30;a++)
		for(b=a;b<=30;b++)
			for(c=a;c<=30;c++)
				if((a*a+b*b==c*c))
					printf("第%3d 组构成勾股定理的数为: %3d %3d %3d\n",++i,a,b,c);
}