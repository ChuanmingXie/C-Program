#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 20

void ArrInput(int *a,int *n)
{
	int *p=a;
	printf("�������������:");scanf("%d",n);
	printf("������%d������:\n",*n);
	for(;p<a+(*n);p++)
		scanf("%d",p);
}

void ArrOuput(int *a,int n)
{
	int *p=a;
	printf("���յ������Ϊ:\n");
	for(;p<a+n;p++)
		printf("%3d ",*p);
}

void Gets(char *s)
{
	printf("���������ַ���:\n");
	scanf("\n");
	gets(s);
}



/*1.ʮ�����ֵĴ���*/
void Dispose(int *a,int n)
{
	int *max,*min,temp,*p;
	max=min=a;
	for(p=a;p<a+n;p++)
	{
		if(*min>*p) min=p;
		else if(*max<*p) max=p;
	}
	temp=a[0];a[0]=*min;*min=temp;
	if(max==a) max=min;
	temp=a[n-1];a[n-1]=*max;*max=temp;
}

/*2.1.N ������ǰmλ������*/
void MovenumBehin(int *a,int n,int *x)
{
	int *p,temp;
	printf("�������ƶ���Ŀ:");scanf("%d",x);
	while(*x>0)
	{
		temp=*a;
		for(p=a+1;p<a+n;p++)
		{
			*(p-1)=*p;
		}
		*(a+n-1)=temp;
		(*x)--;
	}
}

/*2.2.N ���������mλ��ǰ��*/
void MovenumFront(int *a,int n,int *x)
{
	int *p,temp;
	printf("�������ƶ���Ŀ:");scanf("%d",x);
	while(*x>0)
	{
		temp=*(a+n-1);
		for(p=a+n-1;p>a;p--)
		{
			*p=*(p-1);
		}
		*a=temp;
		(*x)--;
	}
}

/*3.N ��������ɸѡ*/


/*4.N �����ֵ�����*/
void Reserve(int *a,int n)
{
	int i,*p1,*p2,temp;
	for(i=0;i<n/2;++i)
	{
		p1=a+i;
		p2=a+(n-1-i);
		temp=*p1;
		*p1=*p2;
		*p2=temp;
	}
}

/*5.�����ַ�������*/
void swap(char *a,char *b)
{
	char p[N];
	strcpy(p,a);
	strcpy(a,b);
	strcpy(b,p);
}

/*6.���ַ����ĳ���*/
int Lengthc(char *a)
{
	int i=0;
	while(*a!='\0')
	{
		a++;
		i++;
	}
	return i;
}

/*7.����ĳλ���ַ�*/
void Copystr(char *a,char *b,int *s,int *e)
{
	int i=0;
	printf("��������ʼλ��:");scanf("%d",s);
	printf("��������ֹλ��:");scanf("%d",e);
	/*while(i<*s-1)			
	{
		a++;
		i++;
	}*/
	for(i=0;i<*s-1;a++,i++);
	/*while(*a!='\0'&&i<*e)	
	{
		i++;
		*b++=*a++;
	}*/
	for(;*a!='\0'&&i<*e;*b++=*a++,i++);
	*b='\0';
}

/*8.���ַ�����ͳ��*/
void Countdata(char *a)
{
	int upp=0,low=0,space=0,digit=0,other=0;
	for(;*a!='\0';a++)
	{
		if(*a>='A'&&*a<='Z')
			++upp;
		else if(*a>='a'&&*a<='z')
			++low;
		else if(*a==' ')
			++space;
		else if(*a>='0'&&*a<='9')
			++digit;
		else
			++other;
	}
	printf("��д��ĸ:%d\nСд��ĸ:%d\n�ո��ַ�:%d\n�����ַ�:%d\n�����ַ�:%d\n",upp,low,space,digit,other);
}

/*9.���ַ�����ɸѡ����*/
void Select(char *a)
{
	char **arr,*p;
	int m=1,i,j;
	for(p=a;*(p+1)!='\0';++p)
	{
		if(!(*p>='0'&&*p<='9'))
			m++;
	}
	arr=(char**)malloc(sizeof(char*)*m);
	for(i=0;i<m;++i)
		arr[i]=(char*)malloc(sizeof(char)*10);
	printf("���յ������Ϊ:\n");
	for(j=0;j<m&&*a!='\0';++a,++j)
	{
		for(i=0;*a>='0'&&*a<='9';++a,++i)
			arr[j][i]=*a;
		arr[j][i]='\0';

		if(strlen(arr[j])!=0)
			printf("%s\t",arr[j]);
	}
}

/*10.�����ַ����Ƚ�*/
int Strcmpfun(char *a,char *b)
{
	int i=0;
	while(*a++==*b++)
	{
		if(*a=='\0'&&*b=='\0')
			return 0;
	}
	return *a-*b;
}

void MatInput(int (*a)[N],int *m)
{
	int i=0,j=0;
	printf("�������������:");scanf("%d",m);
	printf("������%d������:\n",(*m)*(*m));
	for(i=0;i<(*m);++i)
	{
		for(j=0;j<(*m);++j)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
}

void MatOuput(int (*a)[N],int m)
{
	int i,j;
	printf("�������������:\n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
		{
			printf("%3d",*(*(a+i)+j));
		}
		printf("\n");
	}
}
/*11.���׾����ת��*/
void Convert(int a[][N],int b[][N],int m)
{
	int i,j,t;
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
		{
			t=a[i][j];
			a[i][j]=b[j][i];
			b[j][i]=t;
		}
	}
}

/*12.��׾���Ĵ���*/
void sort(char s[10][6])
{
	int i, j;
	char *p, temp[10];
	p = temp;
	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < 9 - i; ++j)
		{
			if (strcmp(s[j], s[j + 1])>0)
			{
				strcpy(p, s[j]);
				strcpy(s[j], s[j + 1]);
				strcpy(s[j + 1], p);
			}
		}
	}
}

/*13.�ۺ����������*/