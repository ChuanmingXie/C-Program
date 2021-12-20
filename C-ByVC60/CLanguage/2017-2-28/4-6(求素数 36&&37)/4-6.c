#include<stdio.h>
#include<math.h>
int main()
{
	int n=1;
	int i,w=0;
	while(n<=200)
	{		
		i=2;
		while(i<=sqrt(n))
		{

			if((n%i)==0)				
				i=n;	
			else
				i=i+1;
		}

		if(i<n)		
			printf("1-200内第%d\t个素数为%d\n",++w,n);		
		n=n+1;
	}
	return 0;
}