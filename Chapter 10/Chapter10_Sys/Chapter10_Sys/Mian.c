#include"DefineAll.c"

void main()
{

	int N;

	printf("--------------�������˵�--------------\n\n");
	printf("---------10.1---�ļ�����ָ��----------\n");
	printf("---------10.2--�򿪺͹ر��ļ�---------\n");
	printf("---------10.3˳���ȡ�����ļ�---------\n");
	printf("---------10.4�����ȡ�����ļ�---------\n");
	printf("---------10.5�ļ���д������---------\n");

	printf("��������鿴�㷨�ı��:");scanf("%d",&N);

	switch(N){
	case 1:fun10_1();break;
	case 2:fun10_2();break;
	case 3:fun10_3();break;
	case 4:fun10_4();break;
	case 5:fun10_5();break;
	case 0:exit(0);break;
	default :printf("ERROR!\n");system("pause");break;
	}
}