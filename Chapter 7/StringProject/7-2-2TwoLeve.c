/*二级函数*/
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int i,j;
/*输入字符串*/
void StrInput(char *s)
{
	printf("请输入字符串:\n");
	getchar();
	gets(s);
	/*scanf("%s",s);	中间不能有空格*/
}

/*输出字符串*/
void StrOuput(char *s)
{
	printf("算法运行结果:\n");
	puts(s);		/*printf("%s\n",str)*/
}

/*字符串逆序输出*/
void Strreve(char *s)
{
	char t;
	for(i=0,j=strlen(s)-1;i<=j;++i,--j)
	{
		t=s[i];s[i]=s[j];s[j]=t;
	}
	/*
	for(i=0,j=strlen(s);i<(int)(strlen(s)/2);++i,--j)
	{
		t=s[i];		s[i]=s[j-1];	s[j-1]=t;
	}
	*/
}

/*字符串的连接*/
void Strcats(char *s1,char *s2)
{
	while(*s1!='\0')
		s1++;
	while(*s2!='\0')
		*(s1++)=*(s2++);
	*s1='\0';
}

/*字符串的统计函数*/
void Strcout(char *s)
{
	int upp=0,low=0,diget=0,space=0,other=0;
	for(;*s!='\0';s++)
	{
		if((*s>='A')&&(*s<='Z'))upp++;
		else if((*s>='a')&&(*s<='z'))low++;
		else if((*s>='0')&&(*s<='9'))diget++;
		else if(*s==' ')space++;
		else other++;
	}
	printf("大写字母个数:%4d\n小写字母个数:%4d\n数字字符个数:%4d\n空格字符个数:%4d\n其他字符个数:%4d\n",upp,low,diget,space,other);
}

/*选择最长的单词*/
void Strselw(char *s)
{
	char **a,*p=s;
	int m=1,max=0,maxb=0;
	for(;*(p+1)!='\0';++p)
	{
		if(!((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')))
			m++;
	}
	a=(char**)malloc(sizeof(char*)*m);
	for(i=0;i<m;++i)
		a[i]=(char*)malloc(sizeof(char)*10);

	for(j=0;j<m&&*s!='\0';++j,++s)
	{
		for(i=0;(*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z');++s,++i)
			a[j][i]=*s;
		a[j][i]='\0';
	}
	max=strlen(a[0]);
	for(i=0;i<m;++i)
	{
		if(max<(int)strlen(a[i]))
		{max=strlen(a[i]);maxb=i;}
	}
	printf("\n最长单词:%s\n",a[maxb]);
}

/*输出元音字母(匹配问题)*/
void Strselc(char *s)
{
	char a[11]={'A','a','E','e','I','i','O','o','U','u','\0'};
	char b[50],*p;
	for(i=0;*s!='\0';++s)
	{
		for(p=a;*p!='\0';++p)
		{
			if(*s==*p)
			{
				b[i]=*p;
				++i;
			}
		}
	}
	b[i]='\0';
	StrOuput(b);
}

/*整数转化为字符串(可划归的匹配问题)*/
void Strturn(char *s)
{
	char a[13]={'-','0','1','2','3','4','5','6','7','8','9','\0'};
	char *p;
	printf("算法运行结果:\n");
	for(;*s!='\0';++s)
	{
		for(p=a;*p!='\0';++p)
		{
			if(*s==*p)
				printf("%c ",*p);
		}
	}
}

/*16进制转化为10进制*/
int Strconv(char *s,char *b)
{
	char *p=s,*q=b;
	int n=0;
	for(;*p!='\0';++p)
	{
		if(*p>='0'&&*p<='9'||*p>='a'&&*p<='f'||*p>='A'&&*p<='F')
		*(q++)=*p;
	}
	*q='\0';
	StrOuput(b);
	for(;*b!='\0';++b)
	{
		if(*b>='0'&&*b<='9')
			n=n*16+(*b)-'0';
		else if(*b>='a'&&*b<='f')
			n=n*16+(*b)-'a'+10;
		else if(*b>='A'&&*b<='F')
			n=n*16+(*b)-'A'+10;
	}
	return n;
}