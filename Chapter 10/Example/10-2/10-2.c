#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *in,*out;

	char ch,infile[20],outfile[20];
	printf("Please enter input file name:");
	scanf("%s",infile);
	printf("Please enter output file name:");
	scanf("%s",outfile);

	if((in=fopen(infile,"r"))==NULL)
	{
		printf("Can't open this file\n");
		exit(0);
	}
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("Can't open this file\n");
		exit(0);
	}

	while(!feof(in))
	{
		ch=fgetc(in);
		fputc(ch,out);
		putchar(ch);
	}
	putchar('\n');
	fclose(in);
	fclose(out);

	//return 0;
	getch();
}

/*  
	char ch;
	char *infile="G:***file1.txt";
	char *outfile="G:***file2.txt";
	printf("Please enter input file name:");
	printf("\n%s	%s\n",infile,outfile);
	scanf("%s",infile);
	printf("%s",infile);
	printf("Please enter output file name:");
	scanf("%s",*outfile);
*/	
/*
	���ϵĴ�������,������infile[]="G:***file1.txt";��
	*infile="G:***file1.txt";�ֱ��Ӧ��scanf���������.
	�������£�
	1.
	char infile[]="G:***file1.txt";
	scanf("%s",infile);

	2.
	char *infile,a[10];
	infile=a;
	scanf("%s",infile);
*/