#include <stdio.h>
int main()
{
	int i=1;
	int t=2;
	while(i<=5)
	{
		t=t*i;
		i=i+1;
	}
	printf("%d\n",t);
	return 0;
}