#include <stdio.h>
int main()
{
	int a,b;
	printf("ÇëÊäÈë²âÊÔÊý¾Ý\n");
	scanf("%d,%d",&a,&b);
	if(a>b) printf("a=%d,b=%d\n",a,b);
	else
	{
		int t;
		t=a,a=b,b=t;
		printf("a=%d,b=%d\n",a,b);
	}
		
}