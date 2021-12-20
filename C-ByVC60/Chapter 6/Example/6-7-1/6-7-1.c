#include<stdio.h>
int main()
{
	int i=0;
	char c[]="I am happy!";
	while(c[i]!='\0')
	{
		printf("%c",c[i++]);
	}
	printf("\n");
	printf("%d\n",i);

}