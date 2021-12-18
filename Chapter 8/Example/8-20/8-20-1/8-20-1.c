#include<stdio.h>
int main()
{
	void copy(char from[],char to[]);
	char a[]="I am a student.";
	char b[]="Do you konw this?";
	printf("a=%s\nb=%s\n",a,b);
	copy(a,b);
	printf("将a复制到b之后:\na=%s\nb=%s\n",a,b);
}
void copy(char from[],char to[])
{
	int i=0;
	while((to[i]=from[i])!='\0')
		i++;
}
