/*与字符串相关的算法*/
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void StrInput(char *s);
void StrOuput(char *s);

void StringReve();
void StringCats();
void StringCout();
void StringSeleWord();
void StringSeleChar();
void StringTurn();
void StringConv();

void Clrscr();

int main()
{
	char str[8];
	printf("--------1.字符串的逆序算法--------\n");
	printf("--------2.字符串的连接算法--------\n");
	printf("--------3.字符串的统计算法--------\n");
	printf("--------4.选字符串最长单词--------\n");
	printf("--------5.选字符串元音字母--------\n");
	
	printf("--------6.字符串与整数转换--------\n");
	printf("--------7.十六进制转十进制--------\n");
	printf("--------------0.Exit--------------\n");
	printf("请输入你要展示的算法项目编号No=");
	scanf("%s",str);
	while(str[0]<'0'||str[0]>'7'){
		printf("您的输入有误请确认后再输入No=");
		scanf("%s",str);
	}
	switch(str[0])
	{
	case '0':if(getch())printf("\n再见!\n");break;
	case '1':StringReve();break;
	case '2':StringCats();break;		
	case '3':StringCout();break;
	case '4':StringSeleWord();break;
	case '5':StringSeleChar();break;
	case '6':StringTurn();break;
	case '7':StringConv();break;

	}
	return 0;
}

void Clrscr()
{
	if(getch())
		system("CLS");
}

char str[100];
void StringReve()
{
	void Strreve(char *s);
	StrInput(str);
	Strreve(str);
	StrOuput(str);
	Clrscr();
	main();
}
	
void StringCats()
{
	void Strcats(char *s1,char *s2);
	char str2[50];
	StrInput(str);
	StrInput(str2);
	Strcats(str,str2);
	StrOuput(str);
	Clrscr();
	main();
}

void StringCout()
{
	void Strcout(char *s);
	StrInput(str);
	Strcout(str);
	Clrscr();
	main();
}
/*选择最长的单词*/
void StringSeleWord()
{
	void Strselw(char *s);
	StrInput(str);
	Strselw(str);
	Clrscr();
	main();
}

void StringSeleChar()
{
	void Strselc(char *s);
	StrInput(str);
	Strselc(str);
	Clrscr();
	main();
}

void StringTurn()
{
	void Strturn(char *s);
	StrInput(str);
	Strturn(str);
	Clrscr();
	main();
}

void StringConv()
{
	int Strconv(char *s,char *b);
	char str1[50],co;
	int flag=1;
	while(flag)
	{
		StrInput(str);
		printf("转化之后结果:\n%d\n",Strconv(str,str1));
		printf("\n继续运算(Y/N):");scanf(" %c",&co);
		while(co!='Y'&&co!='y'&&co!='N'&&co!='n')
		{
			printf("\n输入有误(Y/N):");scanf(" %c",&co);
		}
		if(co=='N'||co=='n')
			flag=0;
	}
	Clrscr();
	main();
}