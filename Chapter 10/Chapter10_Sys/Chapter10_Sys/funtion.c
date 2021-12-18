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
	printf("---------这是10.1节的程序内容---------\n\n");
	if((in=fopen("10.1.5.txt","r"))==NULL)
	{
		printf("文件位置不对");
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
	printf("---------这是10.2节的程序内容---------\n\n");

	printf("fopen函数\n");

	printf("fclose函数\n");

	Back_main();
}
void fun10_3(){
	int N;
	system("CLS");
	printf("---------这是10.3节的程序内容---------\n\n");
	printf("---10.3.1怎样向文件读写字符--例10.1---\n");
	printf("---10.3.1怎样向文件读写字符--例10.2---\n");
	printf("---10.3.2怎样向文件读写字符串例10.3---\n");
	printf("---10.3.2怎样向文件读写字符串测试例---\n");
	printf("---10.3.3用格式化的方式读写文件暂无---\n");
	printf("---10.3.4用二进制的方式读写文件10.4---\n");
	printf("---10.3.4用二进制的方式读写文件测试---\n");
	printf("---10.3.4用二进制的方式读写文件存在---\n");
	printf("--------------0.返回主界面------------\n");

	printf("请输入要查看的算法编号:");scanf("%d",&N);

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
	printf("---------这是10.4节的程序内容---------\n\n");
	printf("-------10.4.1文件位置标记的定位-------\n");
	printf("-------10.4.2-----随机读写------------\n");
	printf("--------------0.返回主界面------------\n");

	printf("请输入要查看算法的编号:");scanf("%d",&N);

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
	printf("---------这是10.5节的程序内容---------\n\n");
		
	printf("ferror函数\n");

	printf("cleareer函数\n");
	
	Back_main();
}