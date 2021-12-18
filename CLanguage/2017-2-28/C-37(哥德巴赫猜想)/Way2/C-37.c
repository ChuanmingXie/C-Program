/*哥德巴赫猜想
1.先将2000以内大于4的偶数输出:a
2.再将偶数内部的素数求出:n
3.用偶数分别减去偶数以内的素数a-n
4.打印三个数，看a-b是否为素数
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a=6;
	for(a=6;a<=20;a+=2)
	{
		int n=3,i=0;
		while(n<=a)
		{		
			i=2;
			while(i<=sqrt(n))
			{

				if((n%i)==0) i=n;	
				else i=i+1;
			}
			if(i<n)	printf("%3d=%3d+%3d\n",a,n,a-n);
			n=n+1;
		}
	}
}
