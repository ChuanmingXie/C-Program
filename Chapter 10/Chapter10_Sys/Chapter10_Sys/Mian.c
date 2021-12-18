#include"DefineAll.c"

void main()
{

	int N;

	printf("--------------这是主菜单--------------\n\n");
	printf("---------10.1---文件类型指针----------\n");
	printf("---------10.2--打开和关闭文件---------\n");
	printf("---------10.3顺序读取数据文件---------\n");
	printf("---------10.4随机读取数据文件---------\n");
	printf("---------10.5文件读写出错检测---------\n");

	printf("请输入如查看算法的编号:");scanf("%d",&N);

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