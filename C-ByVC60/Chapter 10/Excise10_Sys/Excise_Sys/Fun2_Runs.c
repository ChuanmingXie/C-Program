#include"PublicFlie.c" 

void StrWordTurn(){
	FILE *fp;
	char str[100];
	int i=0;

	printf("-------1.字母的文件转换------\n");

	if((fp=fopen("10.1.txt","wb"))==NULL)
	{
		printf("文件打开失败!\n");
		Back_M();
	}
	printf("\n请输入小写字符串('!'结束):");
	scanf("%s",str);
	for(i=0;str[i]!='!';++i)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		fputc(str[i],fp);
	}

	fclose(fp);

	//查看写入情况

	printf("\n查看文件中保存的字符串:");
	fp=fopen("10.1.txt","r");
	while(!feof(fp))
		putchar(fgetc(fp));
	printf("\n");
	fclose(fp);

	Back_M();
}
void StrWordDiff(){
	char i,flag;
	char str[100],c;
	FILE *fp;
	printf("-------2.字母的多行转换------\n");

	if((fp=fopen("10.2.txt","w"))==NULL)
	{
		printf("文件打开失败!\n");
	}
	flag=1;
	while(flag==1)
	{
		printf("请输入字符串:\n");
		scanf("%s",str);
		//gets(str);
		if(fprintf(fp,"%s\n",str)<0)
		{
			printf("输入有误!\n");
		}

		printf("请问是否继续?");
		if((c=getchar())=='N'||(c=getchar())=='n')
			flag=0;
		getchar();
	}
	fclose(fp);

	printf("\n转换并查看文件\n");
	fp=fopen("10.2.txt","r");
	while(fscanf(fp,"%s",str)!=EOF)
	{
		for(i=0;str[i]!='\0';++i)
		{
			if(str[i]>='a'&&str[i]<='z')
				str[i]=str[i]-32;
		}
		printf("%s\n",str);
	}
	fclose(fp);

	Back_M();
}

void FileToUnion(){
	FILE *fp;
	char str[100],temp;
	int i,j,n;
	printf("-------3.两个文件的合并------\n");

	
	fp=fopen("10.3.1.txt","wb");
	printf("请输入A文件内容('!'结束):\n");
	temp=getchar();
	while(temp!='!')
		fputc((temp=getchar()),fp);
	fclose(fp);
	
	fp=fopen("10.3.2.txt","wb");
	printf("请输入B文件内容('!'结束):\n");
	temp=getchar();
	while(temp!='!')
		fputc((temp=getchar()),fp);
	/*
	scanf("%s",str);
	fprintf(fp,"%s\n",str);
	*/
	fclose(fp);


	fp=fopen("10.3.1.txt","r");
	printf("A 文件内容:\n");
	for(i=0;(temp=fgetc(fp))!='!';++i)
	{
		str[i]=temp;
		putchar(str[i]);
	}
	fclose(fp);

	fp=fopen("10.3.2.txt","r");
	printf("\nB 文件内容:\n");
	for(j=i;(temp=fgetc(fp))!='!';++j)
	{
		str[j]=temp;
		putchar(str[j]);
	}
	fclose(fp);

	//printf("%s\n",str);

	n=j;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}

	fp=fopen("10.3.3.txt","wb");
	printf("\nC 文件内容:\n");
	for(i=0;i<n;++i)
	{
		putc(str[i],fp);
		putchar(str[i]);
	}
	printf("\n");
	fclose(fp);

	Back_M();
}

void ScoreCheked(){
	void save();
	int i;
	float sum[SIZE];
	FILE *fp;
	printf("-------4.基础的成绩展示------\n");
	printf("请输入学生信息数据:\n");
	for(i=0;i<SIZE;++i)
	{
		scanf("%s %d %f %f %f",stud[i].name,&stud[i].num,&stud[i].score[0],&stud[i].score[1],&stud[i].score[2]);
		sum[i]=stud[i].score[0]+stud[i].score[1]+stud[i].score[2];
		stud[i].ave=sum[i]/3;
	}

	save();

	fp=fopen("10.4.1_stu.txt","r");
	printf("\nName	NO.	Chiness	Math	English	Ave\n");
	printf("--------------------------------------------\n");
	for(i=0;i<SIZE;++i)
	{
		fread(&stud[i],sizeof(struct student),1,fp);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fclose(fp);

	Back_M();
}

void save()
{
	FILE *fp;
	int i;
	if((fp=fopen("10.4.1_stu.txt","wb"))==NULL)
	{
		printf("文件创建失败!\n");
		Back_M();
	}
	for(i=0;i<SIZE;++i)
	{
		if(fwrite(&stud[i],sizeof(struct student),1,fp)!=1)
		{
			printf("文件写入失败!\n");
			Back_M();
		}
	}
	fclose(fp);
}

void ScoreInSort(){
	void Input();
	void FSave();
	void FSort();
	void Ouput();

	printf("-------5.进阶的成绩排序------\n");
	//Input();
	//FSave();
	Ouput();
	FSort();

	Back_M();
}

void ScoreInsert(){
	FILE *fp1,*fp2;
	int i,t;
	printf("-------6.强化的成绩插入------\n");
	
	printf("请输入新插入的信息:\n");
	printf("NO. :");scanf("%d",&temp.num);
	printf("Name:");scanf("%s",temp.name);
	printf("Chiness:");scanf("%f",&temp.score[0]);
	printf("Math   :");scanf("%f",&temp.score[1]);
	printf("English:");scanf("%f",&temp.score[2]);
	temp.ave=(temp.score[0]+temp.score[1]+temp.score[2])/3;

	printf("\n原始文件:\n");
	fp1=fopen("10.4.3_stu.txt","r");
	printf("\nName	NO.	Chiness	Math	English	Ave\n");
	printf("--------------------------------------------\n");
	for(i=0;i<SIZE;++i)
	{
		fread(&stud[i],sizeof(struct student),1,fp1);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fclose(fp1);

	for(t=0;stud[t].ave>temp.ave&&t<SIZE;t++);

	printf("\n插入后文件:\n");
	fp2=fopen("10.4.4_stu.txt","wb");
	printf("\nName	NO.	Chiness	Math	English	Ave\n");
	printf("--------------------------------------------\n");
	for(i=0;i<t;++i)
	{
		fwrite(&stud[i],sizeof(struct student),1,fp2);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fwrite(&temp,sizeof(struct student),1,fp2);
	printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",temp.name,temp.num,temp.score[0],temp.score[1],temp.score[2],temp.ave);
	for(i=t;i<SIZE;++i)
	{
		fwrite(&stud[i],sizeof(struct student),1,fp2);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fclose(fp2);

	Back_M();
}

void ScoreInSave(){
	void NewData();
	void NewRead();
	void NewWrit();
	printf("-------7.加深的成绩保存------\n");
	NewData();
	NewRead();
	NewWrit();
	Back_M();
}

void Workerselect(){
	void WriteDa();
	void ShowsDa();

	printf("-------8.员工信息的抽取------\n");
	//WriteDa();
	ShowsDa();
	Back_M();
}

void WorkerDelect(){
	void GetName();
	void DeleteW();
	printf("-------9.员工信息行删除------\n");
	GetName();
	DeleteW();
	Back_M();
}