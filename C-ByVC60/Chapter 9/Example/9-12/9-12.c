/*
//√∂æŸ¿‡–Õ
enum Weekday{mon,tue,wed,thu,fri,sat,sun};

enum Weekday workday,weekend;
*/

#include<stdio.h>
int main()
{
	enum Color{red,yellow,blue,white,black};
	enum Color i,j,k,pri;
	int n=0,loop;
	for(i=red;i<=black;i++)
		for(j=red;j<=black;j++)
			if(i!=j)
			{
				for(k=red;k<=black;k++)
					if((k!=i)&&(k!=j))
					{
						n=n+1;
						printf("%-4d",n);
						//printf("%-5d%-5d%-5d\n",i,j,k);
						for(loop=0;loop<3;loop++)
						{
							switch(loop)
							{
							case 0:pri=i;break;
							case 1:pri=j;break;
							case 2:pri=k;break;
							default:break;
							}								
							switch(pri)
							{
							case 0:printf("%-10s","red");break;
							case 1:printf("%-10s","yellow");break;
							case 2:printf("%-10s","blue");break;
							case 3:printf("%-10s","white");break;
							case 4:printf("%-10s","black");break;
							default:break;
							}
						}
						printf("\n");
					}
			}
	printf("\n%-5d\n",n);
	return 0;
}