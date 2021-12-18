#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>


#define Max 100

void swap(int *p1,int *p2)
{
	int p;
	p = *p1; 
	*p1 = *p2; 
	*p2 = p;
}

void SortEqual1(char s[10][6])

{
	int i,j;
	char *p,temp[8];
	p=temp;

	for(i=0;i<9;++i)
	{
		for(j=0;j<9-i;++j)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(p,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],p);
			}
		}
	}
}

void SortEqual2(char (*s)[6])
{
	int i,j;
	char *p,temp[8];
	p=temp;

	for(i=0;i<9;++i)
	{
		for(j=0;j<9-i;++j)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(p,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],p);

			}
		}
	}
}

void SortNotEqual(char *s[])
{
	int i,j;
	char *p;
	for(i=0;i<9;++i)
	{
		for(j=0;j<9-i;++j)
		{
			if(strcmp(*(s+j),*(s+j+1))>0)
			{
				p=*(s+j);
				*(s+j)=*(s+j+1);
				*(s+j+1)=p;
			}
		}
	}
}

void SortString(char **p)
{
	int i,j;
	char *temp;
	for(i=0;i<10;++i)
	{
		for(j=i+1;j<10;++j)
		{
			if(strcmp(*(p+i),*(p+j))>0)
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}

void SortNumber(int **p,int n)
{
	int i,j,*temp;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(**(p+i)>**(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}

char newbuf[Max];
char *newp=newbuf;

char * New(int n)
{
	printf("已进入new函数\n\n");
	if(newp+n<=newbuf+Max)
	{
		newp+=n;
		printf("开辟到:%d\n\n",newp);
		return (newp-n);
	}
	else
		return (NULL);
}

void Free(char * p)
{
	printf("已进入free函数\n\n");
	if(p>=newbuf&&p<newbuf+Max)
		newp=p;
}

double Integral(double (*p)(double) ,double a,double b,int n)
{
	int i;
	double x,h,s;
	h=(b-a)/n;
	x=a;
	s=0;
	for(i=0;i<n;++i)
	{
		x+=h;
		s+=(*p)(x)*h;
	}
	return s;
}

double fsin(double x)
{
	return sin(x);
}

double fcos(double x)
{
	return cos(x);
}

double fexp(double x)
{
	return exp(x);
}