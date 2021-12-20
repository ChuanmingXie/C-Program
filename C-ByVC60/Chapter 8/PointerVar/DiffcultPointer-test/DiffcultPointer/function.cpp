#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *p1, int *p2)
{
	int p;
	p = *p1; *p1 = *p2; *p2 = p;
}

void sort(char s[10][6])
{
	int i, j;
	char *p, temp[10];
	p = temp;
	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < 9 - i; ++j)
		{
			if (strcmp(s[j], s[j + 1])>0)
			{
				strcpy(p, s[j]);
				strcpy(s[j], s[j + 1]);
				strcpy(s[j + 1], p);
			}
		}
	}
}