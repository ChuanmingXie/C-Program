#include"PublicFlie.c" 

void main()
{
	int N;;
	printf("-------1.��ĸ���ļ�ת��------\n");
	printf("-------2.��ĸ�Ķ���ת��------\n");
	printf("-------3.�����ļ��ĺϲ�------\n");
	printf("-------4.�����ĳɼ��ɼ�------\n");
	printf("-------5.���׵ĳɼ�����------\n");
	printf("-------6.ǿ���ĳɼ�����------\n");
	printf("-------7.����ĳɼ�����------\n");
	printf("-------8.Ա����Ϣ�ĳ�ȡ------\n");
	printf("-------9.Ա����Ϣ��ɾ��------\n");
	printf("----------0.�رճ���---------\n");

	printf("�����㷨���:");scanf("%d",&N);

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

