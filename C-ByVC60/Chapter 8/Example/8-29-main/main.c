#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(int argc,char * argv[])
{
	while(argc>1)
	{
		++argv;
		if(*argv=="china")
		{
			system("cmd");
		}
		printf("%s\n",*argv);
		--argc;
	}
	getch();
	return 0;
}


/*
int main(int argc,char * argv[])
{	
	while(argc>1)
	{
		++argv;

		if(*argv=="beijing") printf("you are the bestwoman!");
		if(*argv=="2") printf("you are the bestman!");
		--argc;
	}	
		return 0;
}
*/