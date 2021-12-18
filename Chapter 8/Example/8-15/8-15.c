#include<stdio.h>
int main()
{
	void search(float (*p)[4],int n);
	float score[3][4]={{89.5,77.5,97,59.5},{66,78,69.5,88},{90,55.5,88.5,76}};
	search(score,3);
}

void search(float (*p)[4],int n)
{
	int i,j;
	int flag;
	for(i=0;i<n;i++)
	{
		//flag=0;
		for(j=0;j<4;j++)
		{
			if(*(*(p+i)+j)<60)
				//flag=1;
			//if(flag==1)
			{
				printf("\nNo.%d有不及格成绩,各科成绩为:\n",i+1);
				for(j=0;j<4;j++)
					printf("%5.2f ",*(*(p+i)+j));
				printf("\n\n");
			}
		}
	}
}