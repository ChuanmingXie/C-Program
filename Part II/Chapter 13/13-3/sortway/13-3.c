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
		printf("�ռ�������\n");
		return;
	}
	printf("���뷿����:");
	scanf("%d",&in_number);
	for(i=0;i<*count;i++)
	{
		if(GuestInfo[i].number==in_number)
		{
			printf("������ͬ���\n");
			return;
		}
	}
	GuestInfo[i].number=in_number;
	printf("����������:");
	scanf("%s",GuestInfo[i].name);
	printf("����������:");
	scanf("%d",&GuestInfo[i].sum);
	printf("�������ò�ʱ��:");
	scanf("%s",GuestInfo[i].time);
	(*count)++;
}

void Search(int count)
{
	int i,number,flag=1;
	printf("������Ҫ��ѯ�ı��:");
	scanf("%d",&number);
	for(i=0;i<count&&flag;i++)
	{
		if(GuestInfo[i].number==number)
		{
			printf("����:%s",GuestInfo[i].name);
			printf("	����:%d",GuestInfo[i].sum);
			printf("	�ò�ʱ��:%s",GuestInfo[i].time);
			flag=0;
		}
		else
			printf("û�в�ѯ��!\n");
	}
}

void Update(int count)
{
	int i,number,flag=1;
	printf("������Ҫ�޸ĵı��:");
	scanf("%s",&number);
	for(i=0;i<count&&flag;i++)
	{
		if(GuestInfo[i].number==number)
		{
			printf("����������:");
			scanf("%d",&GuestInfo[i].sum);
			printf("�������ò�ʱ��:");
			scanf("%d",GuestInfo[i].time);
			flag=0;
		}
		else
			printf("û�в�ѯ�������޸ĵ�ֵ!\n");
	}
}

void Delete(int *count)
{
	int i,j,number,flag=1;
	printf("������Ҫɾ���ı��:");
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
			printf("û�п�ɾ��������!\n");
	}
}

void Show(int count)
{
	int i;
	printf("\n���	  ����		����	�ò�ʱ��\n");
	for(i=0;i<count;i++)
		printf("%d%12s%10d%12s\n",GuestInfo[i].number,GuestInfo[i].name,GuestInfo[i].sum,GuestInfo[i].time);
}


int main()
{
	int i,count=0;
	do{
		printf("\n");
		printf("1---����<Insert>\n");
		printf("2---��ѯ<Search>\n");
		printf("3---�޸�<Update>\n");
		printf("4---ɾ��<Delete>\n");
		printf("5---��ʾ<Show>\n");
		printf("6---�˳�<Exit>\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:Insert(&count);	break;
		case 2:Search(count);	break;
		case 3:Update(count);	break;
		case 4:Delete(&count);	break;
		case 5:Show(count); break;
		case 6:break;
		default:printf("����ѡ��!����ѡ\n"); break;
		}
	}while(i!=6);
	return 0;
}
