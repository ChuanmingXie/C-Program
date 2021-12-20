#include<stdio.h>
int main()
{
	char str[]="I love China!";
	printf("%s\n",str);
	printf("%c\n",*(str+7));
	printf("%c\n",str[7]);
	printf("%c\n",*str+2);	//此处是(I+2)即ASCII码的I加上2得到K
}