#include"DefineAll.c"

void Back_main()
{
	if(getch())
		system("CLS");
	main();
}
void fun10_1(){
	FILE *in;

	system("CLS");
	printf("---------����10.1�ڵĳ�������---------\n\n");
	if((in=fopen("10.1.5.txt","r"))==NULL)
	{
		printf("�ļ�λ�ò���");
		Back_main();
	}
	while(!feof(in))
		putchar(fgetc(in));
	putchar(10);
	fclose(in);

	Back_main();
}
void fun10_2(){

	system("CLS");
	printf("---------����10.2�ڵĳ�������---------\n\n");

	printf("fopen����\n");

	printf("fclose����\n");

	Back_main();
}
void fun10_3(){
	int N;
	system("CLS");
	printf("---------����10.3�ڵĳ�������---------\n\n");
	printf("---10.3.1�������ļ���д�ַ�--��10.1---\n");
	printf("---10.3.1�������ļ���д�ַ�--��10.2---\n");
	printf("---10.3.2�������ļ���д�ַ�����10.3---\n");
	printf("---10.3.2�������ļ���д�ַ���������---\n");
	printf("---10.3.3�ø�ʽ���ķ�ʽ��д�ļ�����---\n");
	printf("---10.3.4�ö����Ƶķ�ʽ��д�ļ�10.4---\n");
	printf("---10.3.4�ö����Ƶķ�ʽ��д�ļ�����---\n");
	printf("---10.3.4�ö����Ƶķ�ʽ��д�ļ�����---\n");
	printf("--------------0.����������------------\n");

	printf("������Ҫ�鿴���㷨���:");scanf("%d",&N);

	switch(N)
	{
	case 1:fun10_3_1();break;
	case 2:fun10_3_2();break;
	case 3:fun10_3_3();break;
	case 4:fun10_3_4();break;
	case 5:fun10_3_5();break;
	case 6:fun10_3_6();break;
	case 7:fun10_3_7();break;
	case 0:Back_main();break;
	default :printf("ERROR!");system("pause");break;
	}

	Back_main();
}
void fun10_4(){
	int N;

	system("CLS");
	printf("---------����10.4�ڵĳ�������---------\n\n");
	printf("-------10.4.1�ļ�λ�ñ�ǵĶ�λ-------\n");
	printf("-------10.4.2-----�����д------------\n");
	printf("--------------0.����������------------\n");

	printf("������Ҫ�鿴�㷨�ı��:");scanf("%d",&N);

	switch(N){
	case 1:fun10_4_1();break;
	case 2:fun10_4_2();break;
	case 0:Back_main();break;
	default :printf("ERROR!");system("pause");break;
	}
	
	Back_main();
}
void fun10_5(){
	system("CLS");
	printf("---------����10.5�ڵĳ�������---------\n\n");
		
	printf("ferror����\n");

	printf("cleareer����\n");
	
	Back_main();
}