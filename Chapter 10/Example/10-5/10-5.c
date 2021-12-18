#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *fp1,*fp2;
	if((fp1=fopen("file1.dat","r"))==NULL)
	{
		printf("Can't open\n");
		exit(0);
	}
	if((fp2=fopen("file2.dat","w"))==NULL)
	{
		printf("Can't open\n");
		exit(0);
	}
	while(!(feof(fp1)))
		putchar(getc(fp1));
	putchar(10);
	rewind(fp1);
	while(!feof(fp1))
		putc(getc(fp1),fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
	getch();
}
