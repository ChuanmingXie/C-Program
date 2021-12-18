#include<stdio.h>
int main()
{
	char a[]="str";//字符数组不知道大小时，要赋初值{考试的时候出错的原因就在这里}
	char b[]="str";//但是这种方式的赋值在有些系统里是不能完全兼容的，而且赋值时字符串不能过长


	char c[]="I am happy!";
	printf("%s\n",c);

	scanf("%s%s%s",a,b,c);//空格就是'\0';   不用加&号!!!，这是字符数组的特性
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%s\n",c);
}