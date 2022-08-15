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
	int n,m,a,b;
	for(n=6;n<=200;n+=2)
		for(m=3;m<n;m+=2)
		{
			for(a=2;a<m;a++)
				if(m%a==0)break;
			if(a==m)
			{
				for(b=2;b<n-m;b++)
					if((n-m)%b==0)break;
					if(b==n-m)
					{
						printf("%3d=%3d+%3d\n",n,m,n-m);break;
					}
			}
		}

}