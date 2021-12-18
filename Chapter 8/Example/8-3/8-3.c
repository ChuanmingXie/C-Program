#include<stdio.h>
int main()
{
	void swap(int* p1,int* p2);
	int a,b;
	int *pointer1=&a,*pointer2=&b;
	printf("请输入a和b的值:");
	scanf("%d %d",&a,&b);
	printf("a=%d\tb=%d\n",a,b);
	if(a<b) swap(pointer1,pointer2);
	printf("a=%d\tb=%d\n",a,b);
	printf("Max=%d\tMin=%d\n",*pointer1,*pointer2);
}
void swap(int* p1,int* p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
