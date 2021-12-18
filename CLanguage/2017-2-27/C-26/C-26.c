/*实现目标：
/第一天：2
第二天：2*2
第三天：2*2*2
...*/

#include<stdio.h>
int main()
{
	int e=1,d=0;
	double s=0;
	do{
		d++;
		e*=2;
		s+=e;
		printf("第 %d 天买了 %d 个苹果，花费 %g \n",d,e,e*0.8);
		printf("小计：%g 个\n",s);
	}while(s<100);
	printf("总共买了: %g 个苹果,总共花费:%g 元,每天平均花费:%g 元\n",s,s*0.8,s*0.8/d);
}

