#include"PublicFlie.c" 

void main()
{
	int N;;
	printf("-------1.字母的文件转换------\n");
	printf("-------2.字母的多行转换------\n");
	printf("-------3.两个文件的合并------\n");
	printf("-------4.基础的成绩成绩------\n");
	printf("-------5.进阶的成绩排序------\n");
	printf("-------6.强化的成绩插入------\n");
	printf("-------7.加深的成绩保存------\n");
	printf("-------8.员工信息的抽取------\n");
	printf("-------9.员工信息行删除------\n");
	printf("----------0.关闭程序---------\n");

	printf("输入算法序号:");scanf("%d",&N);

	switch(N)
	{
	case 1:StrWordTurn(); break;
	case 2:StrWordDiff(); break;
	case 3:FileToUnion(); break;
	case 4:ScoreCheked(); break;
	case 5:ScoreInSort(); break;
	case 6:ScoreInsert(); break;
	case 7:ScoreInSave(); break;
	case 8:Workerselect(); break;
	case 9:WorkerDelect(); break;
	case 0:exit(0); break;
	default :printf("ERROR!\n");exit(0);break;
	}
	Back_M();
}

void Back_M()
{
	if(getch())
		system("CLS");
	main();
}

