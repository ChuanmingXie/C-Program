#include<stdio.h>
/*/下标法访问数组元素
int main()
{
	int a[10],i=0;
	printf("请输入10个数:\n");
	for(;i<10;i++)
		scanf("%d",&a[i]);

	printf("输入的数为:\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
*/
/*通过数组名访问元素
int main()
{
	int a[10],i=0;
	for(;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
*/
//通过指针访问元素
int main()
{
	int a[10];
	int *p=&a[0];
	for(;p<(a+10);p++)
		scanf("%d",p);
	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	printf("\n");
	getch();
}

