typedef struct{
	short level;
	unsigned flags;
	char fd;
	unsigned char hold;
	short bsize;
	unsigned char *buffer;
	unsigned char *curp;
	unsigned istemp;
	short token;
}FILE;

FILE *fp;


if(fp=fopen("F:\\WorkSpace\\C program\\Chapter 10\\file.txt","r")==NULL)
{
	printf("can't open this file\n");
	exit(0);
}

fclose(fp);
