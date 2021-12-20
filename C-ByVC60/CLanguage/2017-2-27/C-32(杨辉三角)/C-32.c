/*Êä³öÑî»ÔÈý½Ç
1 
1  1
1  2   1
1  3   3   1
1  4   6   4  1
1  5  10  10  5  1
*/

#include<stdio.h>
int main()
{
	int i,j,a[16]={1,1};
	printf("%5d\n%5d%5d\n",a[0],a[0],a[1]);
	for(i=2;i<16;i++)
	{
		a[i]=1;
		for(j=i-1;j>=1;j--)
		{
			a[j]+=a[j-1];
		}
		for(j=0;j<=i;j++)
		{
			printf("%5d",a[j]);
		}
		printf("\n");
		
	}
	getch();
}