#include"DefineAll.c"

extern void fun10_3_1(){
	FILE *fp;
	char ch,filename[10];

	printf("\n-这是10.3.1怎样向文件读写字符--例10.1-\n");

	
	printf("请输入文件名:");
	scanf("%s",filename);
	if((fp=(fopen(filename,"wb")))==NULL)
	{
		printf("文件位置错误\n");
		Back_10_3();
	}

	ch=getchar();
	printf("请输入内容以#结束:\n");
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);
	putchar(10);

	Back_10_3();
}
extern void fun10_3_2(){
	FILE *in,*out;
	char ch,Infile[10],Outfile[10];

	printf("\n-这是10.3.1怎样向文件读写字符--例10.2-\n");

	printf("输入读入的文件名:");
	scanf("%s",Infile);
	printf("输入写入的文件名:");
	scanf("%s",Outfile);

	if((in=fopen(Infile,"r"))==NULL)
	{
		printf("文件不存在\n");
		Back_10_3();
	}

	if((out=fopen(Outfile,"wb"))==NULL)
	{
		printf("文件无法建立\n");
		Back_10_3();
	}

	while(!feof(in))
	{
		ch=fgetc(in);
		fputc(ch,out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);

	Back_10_3();
}
extern void fun10_3_3(){
	FILE *fp;
	char str[n][10],temp[10];
	int i=0,j,k;
	scanf("%d",&i);
	printf("\n-这是10.3.2怎样向文件读写字符串例10.3-\n");

	printf("请输入字符串:\n");
	for(i=0;i<n;i++)
	{
		printf("%d:  ",i);
		gets(str[i]);
	}

	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[k],str[j])>0)
				k=j;
			if(k!=i)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[k]);
				strcpy(str[k],temp);
			}
		}
	}
	if((fp=fopen("10.3.3.txt","wb"))==NULL)
	{
		printf("文件打开出错\n");
		Back_10_3();
	}
	printf("排序后的结果为:\n");

	for(i=0;i<n;i++)
	{
		if(fputs(str[i],fp)==1);
		{
			fputs("\n",fp);
			printf("%d",i);
		}
		printf("%s\n",str[i]);
	}

	Back_10_3();
}
extern void fun10_3_4(){
	FILE *fp;
	char str[n][10];
	int i=0;

	printf("\n-这是10.3.2怎样向文件读写字符串测试例-\n");

	if((fp=fopen("10.3.3.txt","r"))==NULL)
	{
		printf("文件打开失败\n");
		Back_10_3();
	}
	while(fgets(str[i],10,fp)!=NULL)
	{
		printf("%s",str[i]);
		i++;
	}
	fclose(fp);

	Back_10_3();
}
void Save()
{
	FILE *fp;
	int i;
	if((fp=fopen("10.3_stu.txt","wb"))==NULL)
	{
		printf("文件建立失败\n");
		Back_10_3();
	}
	for(i=0;i<SIZE;++i)
	{
		if(fwrite(&stud[i],sizeof(struct Student_type),1,fp)!=1)
			printf("文件写入出错\n");
	}
	fclose(fp);
}
void Open()
{
	FILE *fp;
	int i;
	if((fp=fopen("10.3_stu.txt","rb"))==NULL)
	{
		printf("文件读取失败\n");
		Back_10_3();
	}
	for(i=0;i<SIZE;++i)
	{
		fread(&stud[i],sizeof(struct Student_type),1,fp);
		printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
}
void Load()
{
	int i;
	FILE *fp;
	if((fp=fopen("10.3_stu.txt","rb"))==NULL)
	{
		printf("文件不存在!\n");
		Back_10_3();
	}
	for(i=0;i<SIZE;++i)
	{
		if(fread(&stud[i],sizeof(struct Student_type),1,fp)!=1)
		{
			if(feof(fp))
			{
				fclose(fp);
				return ;
			}
			printf("文件读取错误\n");
			Back_10_3();
		}
	}
	fclose(fp);
}
extern void fun10_3_5(){
	int i;
	printf("\n-这是10.3.4用二进制的方式读写文件10.4-\n");
	printf("请输入学生信息:\n");
	for(i=0;i<SIZE;++i)
		scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	Save();
	Back_10_3();
}
extern void fun10_3_6(){
	printf("\n-这是10.3.4用二进制的方式读写文件测试-\n");
	Open();
	Back_10_3();
}
extern void fun10_3_7(){
	printf("\n-这是10.3.4用二进制的方式读写文件加载-\n");
	Load();
	Save();
	printf("保存成功,打开如下:\n");
	Open();
	Back_10_3();
}
extern void Back_10_3(){
	if(getch())
		system("CLS");
	fun10_3();
}


extern void fun10_4_1(){
	FILE *fp1,*fp2;
	printf("\n-----这是10.4.1文件位置标记的定位-----\n");
	fp1=fopen("10.1.5.txt","r");
	fp2=fopen("10.3.2.txt","w");
	while(!feof(fp1))
		putchar(getc(fp1));
	putchar(10);
	rewind(fp1);
	while(!feof(fp1))
		putc(getc(fp1),fp2);
	fclose(fp1);
	fclose(fp2);

	Back_10_4();
}
extern void fun10_4_2(){
	int i;
	FILE *fp;

	printf("\n-----这是10.4.2-----随机读写----------\n");

	if((fp=fopen("10.3_stu.txt","rb"))==NULL)
	{
		printf("文件打开失败\n");
		Back_10_4();
	}
	for(i=0;i<SIZE;i+=2)
	{
		fseek(fp,i*sizeof(struct Student_type),0);
		fread(&stud[i],sizeof(struct Student_type),1,fp);
		printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);

	Back_10_4();
}
extern void Back_10_4(){
	if(getch())
		system("CLS");
	fun10_4();
}