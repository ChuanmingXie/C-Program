#include<stdio.h>
/*/�±귨��������Ԫ��
int main()
{
	int a[10],i=0;
	printf("������10����:\n");
	for(;i<10;i++)
		scanf("%d",&a[i]);

	printf("�������Ϊ:\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
*/
/*ͨ������������Ԫ��
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
//ͨ��ָ�����Ԫ��
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

