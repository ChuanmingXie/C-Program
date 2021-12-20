#include<stdio.h>
#include<string.h>

int main()
{
	char A[50],B[20],c;
	int i,j,k;
	gets(A);
	gets(B);
	for(i=0;B[i]!='\0';i++)
	{
		c=B[i];
		for(k=j=0;A[j]!='\0';j++)
		{
			if(A[j]!=c)
			{
				A[k++]=A[j];
			}
		}
		A[k]='\0';
	}

	puts(A);
}
/*
int main()
{
	char A[50],B[20],c;
	int i,j,k;
	gets(A);
	gets(B);
	for(i=0;B[i]!='\0';i++)
	{
		c=B[i];
		for(j=0;A[j]!='\0';j++)
		{
			if(A[j]==c)
			{
				for(k=j;A[k]!='\0';k++)
				{
					A[k]=A[k+1];
				}
				j=j-i;
			}
		}
	}
	puts(A);
}
*/