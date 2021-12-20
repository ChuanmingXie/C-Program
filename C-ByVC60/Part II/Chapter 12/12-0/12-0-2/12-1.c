#include<stdio.h>
#include<math.h>
#include<conio.h>
#define maxsize 16

int dcstack[maxsize];int top=-1;

void DecConver(int x)
{
	int d;
	d=abs(x);
	while(d>0)
	{
		dcstack[++top]=d%2;
		d/=2;
	}
	while(top<maxsize-1)
		dcstack[++top]=0;
	if(x<0)
		dcstack[top]=1;
	else 
		dcstack[top]=0;
}


int main()
{
	int x;
	printf("Please enter a number:");
	scanf("%d",&x);
	DecConver(x);
	printf("(%4d)10 : ",x);
	while(top>-1)
		printf("%d",dcstack[top--]);
	getch();
}

/*
int DecConver(int x)
{
	int i,s=0,n=0;
	while(x>0)
	{
	
		i=x%2;
		s+=((int)pow(10,n))*i;
		//printf("%d,%d,%d\n",x,i,s);
		n++;
		x/=2;
	}
	return s;
}
*/