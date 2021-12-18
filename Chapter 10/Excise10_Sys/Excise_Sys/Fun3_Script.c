#include"PublicFlie.c"

void Input()
{
	int i,j;
	float sum;

	for(i=0;i<SIZE;++i)
	{
		sum=0;
		printf("请输入第%d个学生信息:\n",i+1);
		printf("NO. :");scanf("%d",&stud[i].num);
		printf("Name:");scanf("%s",stud[i].name);
		printf("Chiness:");scanf("%f",&stud[i].score[0]);
		printf("Math   :");scanf("%f",&stud[i].score[1]);
		printf("English:");scanf("%f",&stud[i].score[2]);
		for(j=0;j<3;++j)
			sum+=stud[i].score[j];
		stud[i].ave=sum/3;
	}
}

void FSave()
{
	FILE *fp;
	int i;
	fp=fopen("10.4.2_stu.txt","wb");
	for(i=0;i<SIZE;++i)
		fwrite(&stud[i],sizeof(struct student),1,fp);
	fclose(fp);
}

void Ouput()
{
	FILE *fp;
	int i;
	fp=fopen("10.4.2_stu.txt","r");
	printf("\nName	NO.	Chiness	Math	English	Ave\n");
	printf("--------------------------------------------\n");
	for(i=0;i<SIZE;++i)
	{
		fread(&stud[i],sizeof(struct student),1,fp);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fclose(fp);
}

void FSort()
{
	FILE *fp;
	int i,j;
	for(i=0;i<SIZE;++i)
	{
		for(j=i+1;j<SIZE;++j)
		{
			if(stud[i].ave<stud[j].ave)
			{
				temp=stud[i];
				stud[i]=stud[j];
				stud[j]=temp;
			}
		}
	}

	printf("\n排序之后:\n");
	fp=fopen("10.4.3_stu.txt","wb");
	printf("\nName	NO.	Chiness	Math	English	Ave\n");
	printf("--------------------------------------------\n");
	for(i=0;i<SIZE;++i)
	{
		fwrite(&stud[i],sizeof(struct student),1,fp);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fclose(fp);
}

void NewData()
{
	int i;
	float sum=0;
	printf("请输入新插入的信息:\n");
	printf("NO. :");scanf("%d",&temp.num);
	printf("Name:");scanf("%s",temp.name);
	printf("Chiness:");scanf("%f",&temp.score[0]);
	printf("Math   :");scanf("%f",&temp.score[1]);
	printf("English:");scanf("%f",&temp.score[2]);
	for(i=0;i<3;++i)
		sum+=temp.score[i];
	temp.ave=sum/3;
}
void NewRead()
{
	FILE *fp;
	int i;
	printf("原始数据为:\n");
	fp=fopen("10.4.3_stus.txt","r");
	printf("Name	NO.	Chiness	Math	English	Ave\n");
	printf("-------------------------------------------\n");
	for(i=0;i<SIZE;++i)
	{
		fread(&stud[i],sizeof(struct student),1,fp);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fclose(fp);
}
void NewWrit()
{
	int t,i;
	FILE *fp;
	for(t=0;stud[t].ave>temp.ave&&t<SIZE;t++);

	printf("更新后文件:\n");
	fp=fopen("10.4.3_stus.txt","w");
	printf("Name	NO.	Chiness	Math	English	Ave\n");
	printf("--------------------------------------------\n");
	for(i=0;i<t;++i)
	{
		fwrite(&stud[i],sizeof(struct student),1,fp);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fwrite(&temp,sizeof(struct student),1,fp);
	printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",temp.name,temp.num,temp.score[0],temp.score[1],temp.score[2],temp.ave);
	for(i=t;i<SIZE;++i)
	{
		fwrite(&stud[i],sizeof(struct student),1,fp);
		printf("%-8s %-4d %7.2f %7.2f %7.2f %7.2f\n",stud[i].name,stud[i].num,stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
	}
	fclose(fp);
}

void WriteDa()
{
	FILE *fp;
	int i=0;
	printf("请输入员工信息:\n");
	for(i=0;i<LG;++i)
	{
		printf("第%d位员工:\nNO.	Name	Sex	Age	Addr	Salary	Health	Class\n",i+1);
		scanf("%s %s %c %d %s %d %s %s",emp[i].num,emp[i].name,&emp[i].sex,&emp[i].age,emp[i].addr,&emp[i].salary,emp[i].health,emp[i].study);
	}

	fp=fopen("10.8_employee","wb");
	for(i=0;i<LG;++i)
		fwrite(&emp[i],sizeof(struct employee),1,fp);
	fclose(fp);
}
void ShowsDa()
{
	FILE *fp,*fs;
	int i=0;
	fp=fopen("10.8_employee","r");
	printf("\n原始数据为:\n");
	printf("NO.	Name	Sex	Age	Addr	Salary	Health	Class\n");
	for(i=0;fread(&emp[i],sizeof(struct employee),1,fp)!=0;++i)
	{
		printf("\n%4s%8s%6c%8d%11s%6d%10s%8s",emp[i].num,emp[i].name,emp[i].sex,emp[i].age,emp[i].addr,emp[i].salary,emp[i].health,emp[i].study);
		strcpy(ems[i].name,emp[i].name);
		ems[i].salary=emp[i].salary;
	}
	fclose(fp);

	printf("\n\n抽取数据为:\n");
	printf("	Name	  Salary\n");
	fs=fopen("10.8_EmpSala","wb");
	for(i=0;i<LG;++i)
	{
		fwrite(&ems[i],sizeof(struct EmpSala),1,fs);
		printf("%12s %10d\n",ems[i].name,ems[i].salary);
	}
	fclose(fs);
}

void GetName()
{
	FILE *fp;
	int i,j,flag,n;
	char strn[10];
	printf("原始数据为:\n");
	printf("	Name	  Salary\n");
	fp=fopen("10.8_EmpSala","r");
	for(i=0;i<LG;++i)
	{
		fread(&ems[i],sizeof(struct EmpSala),1,fp);
		printf("%12s %10d\n",ems[i].name,ems[i].salary);
	}
	fclose(fp);


	printf("请输入要删除员工姓名:");
	scanf("%s",strn);
	for(flag=1,i=0;flag&&i<LG;++i)
	{
		if(strcmp(strn,ems[i].name)==0)
		{
			for(j=i;j<LG-1;j++)
			{
				ems[j]=ems[j+1];
				//strcpy(ems[j].name,ems[j+1].name);
				//ems[j].salary=ems[j+1].salary;
			}
			flag=0;
		}
	}
	if(!flag)
		n=LG-1;
	else
		printf("没有找到该员工!\n");

	fp=fopen("10.8_EmpSala_s.txt","wb");
	for(i=0;i<n;++i)
		fwrite(&ems[i],sizeof(struct EmpSala),1,fp);
	fclose(fp);
}
void DeleteW()
{
	FILE *fp;
	int i;
	fp=fopen("10.8_EmpSala_s.txt","r");
	printf("\n删除后的文件为:\n");
	printf("	Name	  Salary\n");
	for(i=0;fread(&ems[i],sizeof(struct EmpSala),1,fp)!=0;++i)
	{
		printf("%12s %10d\n",ems[i].name,ems[i].salary);
	}
	fclose(fp);
}