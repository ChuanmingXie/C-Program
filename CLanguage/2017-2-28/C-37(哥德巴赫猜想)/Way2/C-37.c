/*��°ͺղ���
1.�Ƚ�2000���ڴ���4��ż�����:a
2.�ٽ�ż���ڲ����������:n
3.��ż���ֱ��ȥż�����ڵ�����a-n
4.��ӡ����������a-b�Ƿ�Ϊ����
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
