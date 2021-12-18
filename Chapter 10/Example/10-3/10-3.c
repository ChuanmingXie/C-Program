#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp,*fp2;
	char filename[10],str1[3][10];
	char str[3][10],temp[10];
	int i,j,k,n=3;
	printf("Please enter string\n");
	for(i=0;i<n;i++)
		gets(str[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	if((fp=fopen("file.txt","w"))==NULL)
	{
		printf("Can't open this file\n");
		exit(0);
	}
	printf("\nThe new sequence:\n");
	for(i=0;i<n;i++)
	{
		fputs(str[i],fp);
		fputs("\n",fp);
		puts(str[i]);
	}
	fclose(fp);//这一步非常重要！！！！

	printf("\nPlease enter your file name:");
	scanf("%s",filename);
	if((fp2=fopen(filename,"r"))==NULL)
	{
		printf("Can't open this file");
		exit(0);
	}
	k=0;
	while(fgets(str1[k],10,fp2)!=NULL)
	{
		printf("%s",str1[k]);
		k++;
	}
	//printf("%d\n",k);
	fclose(fp2);

	getch();
	return 0;
}