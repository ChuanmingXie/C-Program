#include<stdio.h>
int main()
{
	void copy(char from[],char to[]);
	char *a="I am a student.";
	char b[]="Do you konw this?";
	char *from=a,*to=b;
	printf("a=%s\nb=%s\n",a,b);
	copy(from,to);
	printf("��a���Ƶ�b֮��:\na=%s\nb=%s\n",a,b);
}
void copy(char from[],char to[])
{
	int i=0;
	for(;(to[i]=from[i])!='\0';i++);
}