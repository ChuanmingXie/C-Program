#include"DefineAll.c"

extern void fun10_3_1(){
	FILE *fp;
	char ch,filename[10];

	printf("\n-����10.3.1�������ļ���д�ַ�--��10.1-\n");

	
	printf("�������ļ���:");
	scanf("%s",filename);
	if((fp=(fopen(filename,"wb")))==NULL)
	{
		printf("�ļ�λ�ô���\n");
		Back_10_3();
	}

	ch=getchar();
	printf("������������#����:\n");
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

	printf("\n-����10.3.1�������ļ���д�ַ�--��10.2-\n");

	printf("���������ļ���:");
	scanf("%s",Infile);
	printf("����д����ļ���:");
	scanf("%s",Outfile);

	if((in=fopen(Infile,"r"))==NULL)
	{
		printf("�ļ�������\n");
		Back_10_3();
	}

	if((out=fopen(Outfile,"wb"))==NULL)
	{
		printf("�ļ��޷�����\n");
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
	printf("\n-����10.3.2�������ļ���д�ַ�����10.3-\n");

	printf("�������ַ���:\n");
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
		printf("�ļ��򿪳���\n");
		Back_10_3();
	}
	printf("�����Ľ��Ϊ:\n");

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

	printf("\n-����10.3.2�������ļ���д�ַ���������-\n");

	if((fp=fopen("10.3.3.txt","r"))==NULL)
	{
		printf("�ļ���ʧ��\n");
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
		printf("�ļ�����ʧ��\n");
		Back_10_3();
	}
	for(i=0;i<SIZE;++i)
	{
		if(fwrite(&stud[i],sizeof(struct Student_type),1,fp)!=1)
			printf("�ļ�д�����\n");
	}
	fclose(fp);
}
void Open()
{
	FILE *fp;
	int i;
	if((fp=fopen("10.3_stu.txt","rb"))==NULL)
	{
		printf("�ļ���ȡʧ��\n");
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
		printf("�ļ�������!\n");
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
			printf("�ļ���ȡ����\n");
			Back_10_3();
		}
	}
	fclose(fp);
}
extern void fun10_3_5(){
	int i;
	printf("\n-����10.3.4�ö����Ƶķ�ʽ��д�ļ�10.4-\n");
	printf("������ѧ����Ϣ:\n");
	for(i=0;i<SIZE;++i)
		scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	Save();
	Back_10_3();
}
extern void fun10_3_6(){
	printf("\n-����10.3.4�ö����Ƶķ�ʽ��д�ļ�����-\n");
	Open();
	Back_10_3();
}
extern void fun10_3_7(){
	printf("\n-����10.3.4�ö����Ƶķ�ʽ��д�ļ�����-\n");
	Load();
	Save();
	printf("����ɹ�,������:\n");
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
	printf("\n-----����10.4.1�ļ�λ�ñ�ǵĶ�λ-----\n");
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

	printf("\n-----����10.4.2-----�����д----------\n");

	if((fp=fopen("10.3_stu.txt","rb"))==NULL)
	{
		printf("�ļ���ʧ��\n");
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