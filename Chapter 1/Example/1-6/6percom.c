/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1,j=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{

			printf("%4d",j);
		}
		printf("\n");
	}

}
*/
#include <stdio.h>
int main(void)
{
	int i,j,k,p;
    //printf("请输入一个数，例如‘6’，然后敲回车：");
    scanf("%d",&i);
	for(k=1;k<=i;k++)
	{
		for(j=k;j<=i;j++)
		{
			printf("%4d",j);            
		}
        if(k>1)
			{
				for(p=k-1;p>0;p--)
				{
					printf("%4d",k-p);        
				}
			}
	printf("\n");   
    }
	//sleep(10000);
    //getchar();
	return 0;
}