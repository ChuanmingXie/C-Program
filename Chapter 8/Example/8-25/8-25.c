#include<stdio.h>
int main()
{
	float score[][4]={{89.5,77,97,59.5},{66,78,69.5,88},{90,60,88.5,76}};
	float *search(float (*pointer)[4],int n),*p;
	int i,k;
	printf("输入学号:");
	scanf("%d",&k);
	printf("No.%d的成绩为:",k);
	p=search(score,k-1);
	for(i=0;i<4;i++)
		printf("%5.2f\t",*(p+i));
	printf("\n");
}

float *search(float(*pointer)[4],int n)
{
	return *(pointer+n);		//返回的值是&score[k][0];???
}