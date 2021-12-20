/*字符串数组的算法*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void StrStatis();/*1.字符串的统计*/
void StrEncryp();/*2.字符串的加密*/
void StrEncryp2();/*2.字符串的加密*/
void StrConnec();/*3.字符串的连接*/
void StrCompar();/*4.字符串的比较*/
void StrsCopys();/*5.字符串的比较*/

void Clrscr();/*小小的清屏函数*/

int main()
{
	int No;
	printf("----------1.字符串的统计---------\n");
	printf("----------2.字符串的加密---------\n");
	printf("----------3.字符串的连接---------\n");
	printf("----------4.字符串的比较---------\n");
	printf("----------5.字符串的比较---------\n");
	printf("请输入要展示的算法编号:No=");scanf("%d",&No);
	while(No>5||No<=0){
		printf("您的输入有误,请重新输入:No=");scanf("%d",&No);
	}
	switch(No){
	case 1: StrStatis();break;/*1.字符串的统计*/
	case 2: StrEncryp2();break;/*2.字符串的加密*/
	case 3: StrConnec();break;/*3.字符串的连接*/
	case 4: StrCompar();break;/*4.字符串的比较*/
	case 5: StrsCopys();break;/*5.字符串的比较*/
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
/*1.字符串的统计*/
void StrStatis(){
	char text[3][80];
	int i,j,upp,low,dig,span,othe;
	upp=low=dig=span=othe=0;
	for(i=0;i<3;++i)
	{
		printf("请输入第%d行字符串:\n",i+1);
		scanf("\n");
		gets(text[i]);	/*不能用scanf("%s",text);scnaf中空格代表输入完成，后面的内容不计入text*/
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
	printf("大写字母:%3d\n小写字母:%3d\n数字字符:%3d\n空格字符:%3d\n其他字符:%3d\n",upp,low,dig,span,othe);
	Clrscr();
	main();
}

/*2.字符串的解密*/
void StrEncryp(){
	int j=0;
	char ch[80],tran[80];
	printf("请输入密文:");
	scanf("\n");
	gets(ch);
	printf("输入的密文:%s\n",ch);
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
	printf("解密的明文:%s",tran);
	Clrscr();
	main();
}
void StrEncryp2()
{
	int i=0;
	char ch[80];
	printf("请输入密文:");
	scanf("\n");gets(ch);
	printf("输入的密文:%s\n",ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>='A'&&ch[i]<='Z')
			ch[i]=155-ch[i];
		else if(ch[i]>='a'&&ch[i]<='z')
			ch[i]=219-ch[i];
		++i;
	}
	printf("解密的明文:%s",ch);
	Clrscr();
	main();
}

/*3.字符串的连接*/
void StrConnec(){
	int i=0,j=0;
	char s1[80],s2[40];
	printf("请输入第一个字符串:");
	scanf("\n%s",s1);
	printf("请输入第二个字符串:");
	scanf("%s",s2);
	while(s1[i]!='\0')++i;
	for(;s2[j]!='\0';++i,++j)
		s1[i]=s2[j];
	s1[i]='\0';
	printf("将两字符串合并后得:%s",s1);
	Clrscr();
	main();
}

/*4.字符串的比较*/
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

/*5.字符串的复制*/
void StrsCopys(){
	char s1[80],s2[80];
	int i;
	printf("s1=");
	scanf("\n%s",s1);
	for(i=0;s1[i]!='\0';++i)
		s2[i]=s1[i];
	s2[i]='\0';			/*词句不写，后面的字符全部变为 '烫'*/
	printf("s2=%s",s2);
	Clrscr();
	main();
}