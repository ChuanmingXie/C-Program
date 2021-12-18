#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

extern void Funtion9_1();	//9.1 定义和使用结构体变量
extern void Funtion9_2();	//9.2 ---使用结构体数组---
extern void Funtion9_3();	//9.3 ------结构体指针----
extern void Funtion9_4();	//9.4 ---用指针处理链表---
extern void Funtion9_5();	//9.5 ------共用体类型----
extern void Funtion9_6();	//9.6 ----使用枚举类型----
extern void Funtion9_7();	//9.7 用typedef声明新类型名
extern void Clscr();		//清屏

extern void main()
{
	int N;
	printf("---------------这是主界面---------------\n\n");
	printf("--------9.1 定义和使用结构体变量--------\n");
	printf("--------9.2 ---使用结构体数组-----------\n");
	printf("--------9.3 ------结构体指针------------\n");
	printf("--------9.4 ---用指针处理链表-----------\n");
	printf("--------9.5 ------共用体类型------------\n");
	printf("--------9.6 ----使用枚举类型------------\n");
	printf("--------9.7 用typedef声明新类型名-------\n");
	printf("---------------0.退出程序---------------\n");
	printf("请输入要查看的小节编号:");
	scanf_s("%d", &N);

	switch(N)
	{
	case 1:Funtion9_1();	break;
	case 2:Funtion9_2();	break;
	case 3:Funtion9_3();	break;
	case 4:Funtion9_4();	break;
	case 5:Funtion9_5();	break;
	case 6:Funtion9_6();	break;
	case 7:Funtion9_7();	break;
	case 0:exit(0);
	default :printf("错误!");system("pause");;break;
	}
}