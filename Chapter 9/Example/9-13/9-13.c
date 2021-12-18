typedef int Integer;
typedef float Real;


----------------
typedef int count;
count i,j;


----------------
int a[100];
<==>
typedef int num[100];
num a;


----------------
char *p;
<==>
typedef char * string;
string p;


----------------
int a[10],b[10],c[10],d[10];
<==>
typedef int Arr[10];
Arr a,b,c,d;