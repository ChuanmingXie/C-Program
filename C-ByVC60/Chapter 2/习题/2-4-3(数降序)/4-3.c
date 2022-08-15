/*对三个数降序输出(最简单的插入排序)*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	int x=0;
	printf("请输入三个数据,以空格标识\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("排序前:%d %d %d\n",a,b,c);
	if(a<b)		x=a,a=b,b=x;				//先将前两个数排序,大数放在a里

	if(a<c)		printf("排序后:%d %d %d\n",c,a,b);	//在对最后一个数插入,大于a放最前面

	else 
		if(c>b)	printf("排序后:%d %d %d\n",a,c,b);	//仅大于b放中间

		else 	printf("排序后:%d %d %d\n",a,b,c);	//小于b放最后
	getch();

	return 0;
}