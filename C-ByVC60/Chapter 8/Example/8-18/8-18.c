#include<stdio.h>
int main()
{
	char a[]="I am a student";
	char b[20];
	int i;
	for(i=0;*(a+i)!='\0';i++)
		*(b+i)=*(a+i);
	*(b+i)='\0';

	printf("a=%s\n",a);
	printf("b=%s\n",b);

	for(i=0;*(b+i)!='\0';i++)
		printf("%c",b[i]);
	printf("\n");
}