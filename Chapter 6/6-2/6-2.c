/*�ַ���������㷨*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void StrStatis();/*1.�ַ�����ͳ��*/
void StrEncryp();/*2.�ַ����ļ���*/
void StrEncryp2();/*2.�ַ����ļ���*/
void StrConnec();/*3.�ַ���������*/
void StrCompar();/*4.�ַ����ıȽ�*/
void StrsCopys();/*5.�ַ����ıȽ�*/

void Clrscr();/*СС����������*/

int main()
{
	int No;
	printf("----------1.�ַ�����ͳ��---------\n");
	printf("----------2.�ַ����ļ���---------\n");
	printf("----------3.�ַ���������---------\n");
	printf("----------4.�ַ����ıȽ�---------\n");
	printf("----------5.�ַ����ıȽ�---------\n");
	printf("������Ҫչʾ���㷨���:No=");scanf("%d",&No);
	while(No>5||No<=0){
		printf("������������,����������:No=");scanf("%d",&No);
	}
	switch(No){
	case 1: StrStatis();break;/*1.�ַ�����ͳ��*/
	case 2: StrEncryp2();break;/*2.�ַ����ļ���*/
	case 3: StrConnec();break;/*3.�ַ���������*/
	case 4: StrCompar();break;/*4.�ַ����ıȽ�*/
	case 5: StrsCopys();break;/*5.�ַ����ıȽ�*/
	default :getch();
	}
	getch();
	return 0;
}
void Clrscr()
{
	if(getch())
		system("CLS");
}
/*1.�ַ�����ͳ��*/
void StrStatis(){
	char text[3][80];
	int i,j,upp,low,dig,span,othe;
	upp=low=dig=span=othe=0;
	for(i=0;i<3;++i)
	{
		printf("�������%d���ַ���:\n",i+1);
		scanf("\n");
		gets(text[i]);	/*������scanf("%s",text);scnaf�пո����������ɣ���������ݲ�����text*/
		for(j=0;j<80&&text[i][j]!='\0';++j)
		{
			if(text[i][j]>='A'&&text[i][j]<='Z')
				upp++;
			else if(text[i][j]>='a'&&text[i][j]<='z')
				low++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
				dig++;
			else if(text[i][j]==' ')
				span++;
			else
				othe++;
		}
	}
	printf("��д��ĸ:%3d\nСд��ĸ:%3d\n�����ַ�:%3d\n�ո��ַ�:%3d\n�����ַ�:%3d\n",upp,low,dig,span,othe);
	Clrscr();
	main();
}

/*2.�ַ����Ľ���*/
void StrEncryp(){
	int j=0;
	char ch[80],tran[80];
	printf("����������:");
	scanf("\n");
	gets(ch);
	printf("���������:%s\n",ch);
	while(ch[j]!='\0')
	{
		if((ch[j]>='A')&&(ch[j]<='Z'))
			tran[j]=155-ch[j];
		else if(ch[j]>='a'&&ch[j]<='z')
			tran[j]=219-ch[j];
		else
			tran[j]=ch[j];
		++j;
	}
	tran[j]='\0';
	printf("���ܵ�����:%s",tran);
	Clrscr();
	main();
}
void StrEncryp2()
{
	int i=0;
	char ch[80];
	printf("����������:");
	scanf("\n");gets(ch);
	printf("���������:%s\n",ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>='A'&&ch[i]<='Z')
			ch[i]=155-ch[i];
		else if(ch[i]>='a'&&ch[i]<='z')
			ch[i]=219-ch[i];
		++i;
	}
	printf("���ܵ�����:%s",ch);
	Clrscr();
	main();
}

/*3.�ַ���������*/
void StrConnec(){
	int i=0,j=0;
	char s1[80],s2[40];
	printf("�������һ���ַ���:");
	scanf("\n%s",s1);
	printf("������ڶ����ַ���:");
	scanf("%s",s2);
	while(s1[i]!='\0')++i;
	for(;s2[j]!='\0';++i,++j)
		s1[i]=s2[j];
	s1[i]='\0';
	printf("�����ַ����ϲ����:%s",s1);
	Clrscr();
	main();
}

/*4.�ַ����ıȽ�*/
void StrCompar(){
	int i=0,result=0;
	char s1[100],s2[100];
	printf("s1=");
	scanf("\n");
	gets(s1);
	printf("s2=");
	gets(s2);
	while((s1[i]==s2[i])&&s2[i]!='\0')++i;
	if(s1[i]=='\0'&&s2[i]=='\0')
		result=0;
	else{
		//printf("%c\t%c\n",s1[i],s2[i]);
		result=s1[i]-s2[i];
	}
	printf("%d",result);
	Clrscr();
	main();
}

/*5.�ַ����ĸ���*/
void StrsCopys(){
	char s1[80],s2[80];
	int i;
	printf("s1=");
	scanf("\n%s",s1);
	for(i=0;s1[i]!='\0';++i)
		s2[i]=s1[i];
	s2[i]='\0';			/*�ʾ䲻д��������ַ�ȫ����Ϊ '��'*/
	printf("s2=%s",s2);
	Clrscr();
	main();
}