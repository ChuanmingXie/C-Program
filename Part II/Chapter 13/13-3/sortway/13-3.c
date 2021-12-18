#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MaxSize 20

struct guestinfo
{
	char name[8];
	int sum;
	char time[10];
	int number;
}GuestInfo[MaxSize];

void Insert(int *count)
{
	int i,in_number;
	if(*count==MaxSize)
	{
		printf("空间已满！\n");
		return;
	}
	printf("输入房间编号:");
	scanf("%d",&in_number);
	for(i=0;i<*count;i++)
	{
		if(GuestInfo[i].number==in_number)
		{
			printf("已有相同编号\n");
			return;
		}
	}
	GuestInfo[i].number=in_number;
	printf("请输入姓名:");
	scanf("%s",GuestInfo[i].name);
	printf("请输入人数:");
	scanf("%d",&GuestInfo[i].sum);
	printf("请输入用餐时间:");
	scanf("%s",GuestInfo[i].time);
	(*count)++;
}

void Search(int count)
{
	int i,number,flag=1;
	printf("请输入要查询的编号:");
	scanf("%d",&number);
	for(i=0;i<count&&flag;i++)
	{
		if(GuestInfo[i].number==number)
		{
			printf("姓名:%s",GuestInfo[i].name);
			printf("	人数:%d",GuestInfo[i].sum);
			printf("	用餐时间:%s",GuestInfo[i].time);
			flag=0;
		}
		else
			printf("没有查询到!\n");
	}
}

void Update(int count)
{
	int i,number,flag=1;
	printf("请输入要修改的编号:");
	scanf("%s",&number);
	for(i=0;i<count&&flag;i++)
	{
		if(GuestInfo[i].number==number)
		{
			printf("请输入人数:");
			scanf("%d",&GuestInfo[i].sum);
			printf("请输入用餐时间:");
			scanf("%d",GuestInfo[i].time);
			flag=0;
		}
		else
			printf("没有查询到可以修改的值!\n");
	}
}

void Delete(int *count)
{
	int i,j,number,flag=1;
	printf("请输入要删除的编号:");
	scanf("%s",&number);
	for(i=0;i<*count&&flag;i++)
	{
		if(GuestInfo[i].number==number)
		{
			for(j=i;j<*count-1;j++)
				GuestInfo[j]=GuestInfo[j+1];
			flag=0;
			(*count)--;
		}
		else
			printf("没有可删除的数据!\n");
	}
}

void Show(int count)
{
	int i;
	printf("\n编号	  姓名		人数	用餐时间\n");
	for(i=0;i<count;i++)
		printf("%d%12s%10d%12s\n",GuestInfo[i].number,GuestInfo[i].name,GuestInfo[i].sum,GuestInfo[i].time);
}


int main()
{
	int i,count=0;
	do{
		printf("\n");
		printf("1---插入<Insert>\n");
		printf("2---查询<Search>\n");
		printf("3---修改<Update>\n");
		printf("4---删除<Delete>\n");
		printf("5---显示<Show>\n");
		printf("6---退出<Exit>\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:Insert(&count);	break;
		case 2:Search(count);	break;
		case 3:Update(count);	break;
		case 4:Delete(&count);	break;
		case 5:Show(count); break;
		case 6:break;
		default:printf("错误选择!请重选\n"); break;
		}
	}while(i!=6);
	return 0;
}
