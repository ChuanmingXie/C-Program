#include<stdio.h>
int main()
{
	char a[]="str";//�ַ����鲻֪����Сʱ��Ҫ����ֵ{���Ե�ʱ������ԭ���������}
	char b[]="str";//�������ַ�ʽ�ĸ�ֵ����Щϵͳ���ǲ�����ȫ���ݵģ����Ҹ�ֵʱ�ַ������ܹ���


	char c[]="I am happy!";
	printf("%s\n",c);

	scanf("%s%s%s",a,b,c);//�ո����'\0';   ���ü�&��!!!�������ַ����������
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%s\n",c);
}