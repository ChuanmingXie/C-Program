#include<stdio.h>
/*
int main()
{
	int i=3;
	int* i_pointer=&i;
	printf("%d\n",* i_pointer);
	getch();
}
*/


int main()
{
	int i;
	int * i_pointer;
	i_pointer=&i;		//把i的地址赋值给i_pointer
	* i_pointer=3;		//将数值3送到变量中
	printf("i=%d\n",i);
	printf("* i_pointer=%d\n",* i_pointer);
	printf("* (&i)=%d\n",*(&i));
}


/*
int main()
{
	int a=100,b=10;
	int* i_pointer1=&a,* i_pointer2=&b;
	printf("* i_pointer1=%d\t*i_pointer2=%d\n",* i_pointer1,* i_pointer2);
}
*/

/*
int main()
{
	int a=10,b=100;
	int* i_pointer1,* i_pointer2;
	i_pointer1=&a;
	i_pointer2=&b;
	printf("* i_pointer1=%d\t*i_pointer2=%d\n",* i_pointer1,* i_pointer2);
}
*/










