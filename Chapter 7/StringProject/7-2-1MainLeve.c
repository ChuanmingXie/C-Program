/*���ַ�����ص��㷨*/
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
	printf("--------1.�ַ����������㷨--------\n");
	printf("--------2.�ַ����������㷨--------\n");
	printf("--------3.�ַ�����ͳ���㷨--------\n");
	printf("--------4.ѡ�ַ��������--------\n");
	printf("--------5.ѡ�ַ���Ԫ����ĸ--------\n");
	
	printf("--------6.�ַ���������ת��--------\n");
	printf("--------7.ʮ������תʮ����--------\n");
	printf("--------------0.Exit--------------\n");
	printf("��������Ҫչʾ���㷨��Ŀ���No=");
	scanf("%s",str);
	while(str[0]<'0'||str[0]>'7'){
		printf("��������������ȷ�Ϻ�������No=");
		scanf("%s",str);
	}
	switch(str[0])
	{
	case '0':if(getch())printf("\n�ټ�!\n");break;
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
/*ѡ����ĵ���*/
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
		printf("ת��֮����:\n%d\n",Strconv(str,str1));
		printf("\n��������(Y/N):");scanf(" %c",&co);
		while(co!='Y'&&co!='y'&&co!='N'&&co!='n')
		{
			printf("\n��������(Y/N):");scanf(" %c",&co);
		}
		if(co=='N'||co=='n')
			flag=0;
	}
	Clrscr();
	main();
}