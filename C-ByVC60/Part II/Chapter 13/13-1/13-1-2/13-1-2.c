#include<stdio.h>
#include<conio.h>
#include<process.h>
#define SIZE 9

typedef struct tax{
	long left;
	long right;
	int tax;
	long deduct;
}TAX_LIST;

void disp(TAX_LIST tax_list[])
{
	double salary,s,tax,ff;
	int i;
	printf("Please enter pre-tax deduction:");
	scanf("%lf",&ff);
	printf("Please enter your monthly income:");
	scanf("%lf",&salary);

	if(salary>=0)
	{
		s=salary-ff;
		if(s<=0)tax=0;
		else{
			for(i=0;i<SIZE-1;i++)
			{
				if(s<tax_list[i].right&&s>=tax_list[i].left)
					tax=s*tax_list[i].tax/100.-tax_list[i].deduct;
			}
			if(s>=tax_list[8].left)
				tax=s*tax_list[i].tax/100.-tax_list[i].deduct;
		}
	}	
	printf("Your income tax for individuals is:%.2lf\n",tax);
}

int main()
{
	FILE *fp;
	TAX_LIST tax_list[SIZE];
	if((fp=fopen("TAX.din","rb"))==NULL)
	{
		printf("\nCan't not open this file!\n");
		exit(1);
	}
	if(fread(tax_list,sizeof(TAX_LIST),SIZE,fp)!=SIZE)
	{
		printf("file read error\n");
		exit(1);
	}
	disp(tax_list);
	fclose(fp);
	getch();
	return 0;
}