#include<stdio.h>
int main()
{
	char str[]="I love China!";
	printf("%s\n",str);
	printf("%c\n",*(str+7));
	printf("%c\n",str[7]);
	printf("%c\n",*str+2);	//�˴���(I+2)��ASCII���I����2�õ�K
}