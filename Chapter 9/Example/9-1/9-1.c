#include<stdio.h>
int main()
{
	struct Master
	{
		int num;
		char name[20];
		char sex;
		int age;
		float score;
		char addr[30];
	}Master1={101,"ÕÅÏè",'M',23,98.5,"Beijing Road"},Master2={102,"li Ming",'W',20,89.4,"HaiNanDao"};

	printf("NO:%d\nName:%s\nSex:%c\nAge:%d\nScore:%0.2f\nAddress:%s\n\n",Master1.num,Master1.name,Master1.sex,Master1.age,Master1.score,Master1.addr);
	printf("NO:%d\nName:%s\nSex:%c\nAge:%d\nScore:%0.2f\nAddress:%s\n\n",Master2.num,Master2.name,Master2.sex,Master2.age,Master2.score,Master2.addr);
	
	return 0;
}