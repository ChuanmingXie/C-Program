extern A;
int power(int n)
{
	int i=0,y=1;
	for(;i<n;i++)
		y*=A;
	return y;
}