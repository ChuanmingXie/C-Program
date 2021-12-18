#include<stdio.h>

float Max=0,Min=0;
int main()
{
	float Aver(float a[],int n);
	float Array[10],ave=0;
	int i=0;
	for(;i<10;i++)
	{
		scanf("%f",&Array[i]);
	}
	ave=Aver(Array,10);//必须先执行一次，才能将Max和Min保存到内存中
	printf("Aver=%6.2f\tMax=%g\tMin=%g\n",ave,Max,Min);
}

float Aver(float a[],int n)
{
	int k;
	float ave=0;
	Min=Max=a[0];
	for(k=0;k<n;k++)
	{
		if(a[k]>Max) 
		{Max=a[k];}
		else if(a[k]<Min) 
		{Min=a[k];}
		ave+=a[k];
	}
	return ave/n;
}