#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,word=0,num=0,sum=0,p=0;
	char str[50],c;
	gets(str);

	for(i=0;(c=str[i])!='\0';i++)
	{
		if(c>='0'&&c<='9')
		{
			word=1;
			num++;
			if(num==1)
				{p=(c-48);}
			else
				{p=p*10+(c-48);}	
		}
		else if(word==1)//如果word变成了0，就不会再进来了，也就关闭了加P的开关
		{				//如果不是数字，且word值为1，表明刚开始进入了非数字区，求和后，关闭处理
			sum+=p;
			word=0;		//只有在数字已经处理完，我们才能关闭处理
			num=0;
		}

	}

	printf("%d\n",sum);
}