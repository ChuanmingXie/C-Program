#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch,filename[10];
	printf("Please enter your using file name:\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"a"))==NULL)
	{
		printf("Can't open this file\n");
		exit(0);
	}

	//ch=getchar();
	printf("Please input something you need save and end with #:\n");
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		//putchar(ch);
		ch=getchar();
	}
	fclose(fp);
	putchar(10);
	//putchar('\n');

	getch();
	return 0;
}
