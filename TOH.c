#include<stdio.h>
int toh(char,char,char,int);

int main()
{
	char a='A';
	char b= 'B';
	char c= 'C';
	int n;
	printf("\n enter the no. of rings");
	scanf("%d",&n);
	toh(a,b,c,n);
	return 0;
}

int toh(char a, char b, char c,int n)
{

	if(n==1)
	{
	printf("\nmove disc 1 from  %c ---> %c",a,c);
	return 0;
	}
else
{
	toh(a,c,b,n-1);
	printf("\nmove disc %d from  %c ---> %c\n",n,a,c);
	toh(b,a,c,n-1);
}
return 0;
}
