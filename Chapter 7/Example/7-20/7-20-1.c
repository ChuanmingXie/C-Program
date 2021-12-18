#include<stdio.h>
#include<string.h>
int main()
{
	void getString(char a[]);
	void DelString(char a[],char c);
	void PutString(char a[]);
	int i;
	char str[80],c[20];
	getString(str);
	getString(c);
	for(i=0;c[i]!='\0';i++)
	{
		DelString(str,c[i]);
	}
	PutString(str);
}
