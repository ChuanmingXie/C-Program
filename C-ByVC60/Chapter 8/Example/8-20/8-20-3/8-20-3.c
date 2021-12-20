//用字符指针变量做形参和实参

#include<stdio.h>
int main()
{
	void copy(char *from,char *to);
	char *a="I am a student.";
	char b[]="Do you konw this?";
	char *p=b;
	printf("a=%s\nb=%s\n",a,b);
	copy(a,p);
	printf("将a复制到b之后:\na=%s\nb=%s\n",a,b);
}
void copy(char *from,char *to)
{
/*
	//写法1：
	for(;*from!='\0';from++,to++)
		*to=*from;
	*to='\0';
*/

	//写法2：
	while((*to=*from)!='\0')
	{to++;from++;}
/*
	
	//写法3：
	while((*to++=*from++)!='\0');

	//写法4：
	while(*to++=*from++);


	//写法5：
	while(*from!='\0')
		*to++=*from++;
	*to='\0';


	//写法6：
	while(*from)
		*to++=*from++;
	*to='\0';


	//写法7：
	for(;((*to++=*from++)!='\0'););

	//写法8：
	for(;*to++=*from++;);


	//写法9：
	char *p1=from,*p2=to;
	while(*p2++=*p1++);
*/
}
