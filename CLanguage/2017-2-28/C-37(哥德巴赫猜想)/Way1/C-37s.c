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