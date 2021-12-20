#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include"public.h"

void main() {
	int N;
	printf("************************************\n");
	printf("--------01.结构体日期定义应用-------\n");
	printf("--------02.结构体作为函数参数-------\n");
	printf("************************************\n");
	printf("--------03.学生的成绩数组输出-------\n");
	printf("--------04.学生的成绩数组输入-------\n");
	printf("--------05.学生成绩的统计操作-------\n");
	printf("************************************\n");
	printf("--------06.链表实现按编号删除-------\n");
	printf("--------07.动态链表的删除算法-------\n");
	printf("--------08.动态链表的插入算法-------\n");
	printf("--------09.链表操作--建删插查-------\n");
	printf("--------10.链表的学号升序合并-------\n");
	printf("--------11.删去两链表中重复点-------\n");
	printf("--------12.按年龄删除链表节点-------\n");
	printf("************************************\n\n");
	printf("请输入要查看的算法编号:");
	scanf_s("%d", &N);

	switch (N)
	{
	case 1:Fun1_DeSrct(); break;
	case 2:Fun2_UsSrct(); break;
	case 3:Fun3_PrintS(); break;
	case 4:Fun4_InputS(); break;
	case 5:Fun5_CountS(); break;
	case 6:Fun6_DeleNode(); break;
	case 7:Fun7_NodeDele(); break;
	case 8:Fun8_NodeInse(); break;
	case 9:Fun9_LinkOper(); break;
	case 10:Fun10_MergeNode(); break;
	case 11:Fun11_DeleLink(); break;
	case 12:Fun12_DeteMore(); break;
	case 0:printf("Thank you!"); system("pause"); break;
	default:printf("ERROR!"); system("pause"); break;
	}
}