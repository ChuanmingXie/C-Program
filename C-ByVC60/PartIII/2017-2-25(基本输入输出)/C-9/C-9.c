#include<stdio.h>
int main()
{
	char ch[20];
	int i=0;
	printf("ÇëÊäÈë×Ö·û´®£º\n");
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>='A'&&ch[i]<='Y')
			ch[i]=ch[i]+33;
		else if(ch[i]=='Z')
			ch[i]='a';

		++i;
	}
	printf("%s\n",ch);
}