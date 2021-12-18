/*交换a，b两个数*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	void swap1(int x,int y);
	void swap2(int *x,int *y);
	void swap(int *x,int *y);
	printf("请输入数据:\n");
	printf("a=");	scanf("%d",&a);
	printf("b=");	scanf("%d",&b);

	printf("\n1.单向值传递交换:\n调用函数交换前:%d\t%d\n",a,b);
	swap1(a,b);
	printf("调用函数交换后:%d\t%d\n",a,b);			//输出的是值
	printf("a=%d\nb=%d\n",a,b);
	printf("单向传递值，不变\n\n");
	
	printf("2.单向地址传递交换\n调用函数交换前:%d\t%d\n",&a,&b);
	swap2(&a,&b);									//传递的实际参数是地址
	printf("调用函数交换后:%d\t%d\n",&a,&b);		//输出的是地址
	printf("a=%d\nb=%d\n",a,b);
	printf("单向传递地址，不变\n\n");

	printf("3.交换地址中所存值\n调用函数交换前:%d\t%d\n",&a,&b);
	swap(&a,&b);									//传递的实际参数是地址
	printf("调用函数交换后:%d\t%d\n",&a,&b);		//输出的是地址
	printf("a=%d\nb=%d\n",a,b);
	printf("交换地址内所存值，值交换，地址不变\n\n");
	getch();
	return 0;
}


void swap1(int x,int y)		//值交换法，无效
{
	int t=0;		/*值交换本质上是一样的,如3和4;在函数体内的交换结果无法回传
					至主函数，导致交换实际是不能完成的*/

	printf("函数体内交换前:%d\t%d\n",x,y);		//输出的是值
	t=x;	x=y;	y=t;
	printf("函数体内交换后:%d\t%d\n",x,y);		//输出的是值

}

void swap2(int *x,int *y)	//地址交换法，无效
{
	int *t=NULL;	/*地址交换如1299684和1299868;在函数体内的交换结果无法回传
					至主函数，导致交换实际是不能完成的*/

	printf("函数体内交换前:%d\t%d\n",x,y);		//输出的是值
	t=x;	x=y;	y=t;
	printf("函数体内交换后:%d\t%d\n",x,y);		//输出的是值

}

void swap(int *x,int *y)	//指针(目标变量)交换法，有效
{
	int t=0;		/*地址交换和值交换本质上是一样的,如3和4;1299684和1299868;
					传递过来交换的效果是一样的,采取指针方式：将地址以实际参数
					传递，在函数体中交换指针才能实现真正的交换*/

	printf("函数体内交换前:%d\t%d\n",x,y);			//输出的是地址
	printf("函数体内交换前:%d\t%d\n",*x,*y);		//输出的是值	
	t=*x;	*x=*y;	*y=t;
	printf("函数体内交换后:%d\t%d\n",*x,*y);		//输出的是值
	printf("函数体内交换后:%d\t%d\n",x,y);			//输出的是地址
}