//���ַ�ָ��������βκ�ʵ��

#include<stdio.h>
int main()
{
	void copy(char *from,char *to);
	char *a="I am a student.";
	char b[]="Do you konw this?";
	char *p=b;
	printf("a=%s\nb=%s\n",a,b);
	copy(a,p);
	printf("��a���Ƶ�b֮��:\na=%s\nb=%s\n",a,b);
}
void copy(char *from,char *to)
{
/*
	//д��1��
	for(;*from!='\0';from++,to++)
		*to=*from;
	*to='\0';
*/

	//д��2��
	while((*to=*from)!='\0')
	{to++;from++;}
/*
	
	//д��3��
	while((*to++=*from++)!='\0');

	//д��4��
	while(*to++=*from++);


	//д��5��
	while(*from!='\0')
		*to++=*from++;
	*to='\0';


	//д��6��
	while(*from)
		*to++=*from++;
	*to='\0';


	//д��7��
	for(;((*to++=*from++)!='\0'););

	//д��8��
	for(;*to++=*from++;);


	//д��9��
	char *p1=from,*p2=to;
	while(*p2++=*p1++);
*/
}
