#include<stdio.h>
int sort(int[], int);
int display(int[], int,int);

int main()
{
int A[10];
int i, n;
printf("enter the no. of elements iin the array\n");
scanf("%d",&n);
printf("enter the no. of elements iin the array\n");
for (i=0;i<n;i++)
scanf("%d",&A[i]);
sort(A,n);
return 0;
}

int sort(int A[], int n)
{
int i,j,temp,small,k;
for(i=0;i<n;i++)
{
small= A[i];
k=i;
	for (j=i+1;j<n;j++)
	{
	if (A[j]<small)
{
small= A[j];
k=j;
}
	}
if (i!=k)
{
temp= A[i];
A[i]= A[k];
A[k]= temp;
}
display(A,n,i);
}
return 0;
}

int display(int A[],int n, int j)
{
printf("\n pass %d :- ",j);
int i;
for (i=0;i<n;i++)
printf("%d ",A[i]);
return 0;
}
