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

//此处的绝对地址会引发打开错误,测试时要进行修改
if(fp=fopen("F:\\WorkSpace\\C program\\Chapter 10\\file.txt","r")==NULL)
{
	printf("can't open this file\n");
	exit(0);
}

fclose(fp);
