#include<stdio.h>
int main()
{
	float score[][4]={{89.5,77,97,59.5},{66,78,69.5,88},{90,55.5,88.5,76}};
	float *search(float(*pointer)[4]);
	float *p;
	int i,j;
	for(i=0;i<3;i++)
	{
		p=search(score+i);
		if(p==*(score+i))
		{
			printf("No.%d score:\n语文\t数学\t英语\t体育\n",i+1);
			for(j=0;j<4;j++)
				printf("%5.2f\t",*(p+j));
			printf("\n\n");
		}
	}
}

float *search(float(*pointer)[4])
{
	int i=0;
	for(;i<4;i++)
		if(*(*pointer+i)<60)	
			return *pointer;
	//return 0;
}