/*����ǰ1��100�ĺ�*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int sum=0,n=1,N=0;
	//int x=1;
	printf("������Ҫ�����ǰN���\nN=");
	scanf("%d",&N);
	while(n<N)
	{
		//x*=2;printf("%d\n",x);
		sum=sum+n;++n;
	}
	printf("1+2+3+....+%d=%d\n",N,sum);
	//printf("2^%d=%d\n",N,x);
	getch();
	return 0;
}