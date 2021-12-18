void DelString(char a[],char c)
{
	int i,j;
	for(i=j=0;a[i]!='\0';i++)
	{
		if(a[i]!=c)
		{
			a[j++]=a[i];
		}
	}
	a[j]='\0';
}