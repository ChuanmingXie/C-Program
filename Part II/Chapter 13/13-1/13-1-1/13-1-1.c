#include<stdio.h>
#include<process.h>
#include<conio.h>
#define SIZE 9
typedef struct tax{
	long left;
	long right;
	int tax;
	long deduct;
}TAX_LIST;

void acceptdata(TAX_LIST tax_list[])
{
	int i=0;
	for(;i<SIZE;i++)
	{
		printf("Please enter data:\n");
		scanf("%ld %ld %d %ld",&tax_list[i].left,&tax_list[i].right,&tax_list[i].tax,&tax_list[i].deduct);
	}
}

int main()
{
	FILE *fp;
	//int i;
	TAX_LIST tax_list[SIZE];
	
	if((fp=fopen("TAX.din","wb"))==NULL)
	{
		printf("Can't open this file\n");
		exit(1);
	}
	acceptdata(tax_list);
	if(fwrite(tax_list,sizeof(TAX_LIST),SIZE,fp)!=SIZE)
		printf("file write error!\n");
	
/*
	if((fp=fopen("TAX.din","rb"))==NULL)
	{
		printf("Can't open this file\n");
		exit(1);
	}
	printf("left	right	tax	kouqu\n");
	for(i=0;i<SIZE;i++)
	{
		fread(&tax_list[i],sizeof(TAX_LIST),1,fp);
		printf("%ld	%ld	%d	%ld\n",tax_list[i].left,tax_list[i].right,tax_list[i].tax,tax_list[i].deduct);
	}
*/

	fclose(fp);
	getch();
	return 0;
}