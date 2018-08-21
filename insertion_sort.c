#include<stdio.h>
int sort(int[], int);
int display(int[], int, int);

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
int i,j,tmp;
for(i=1;i<n;i++)
{
tmp= A[i];
for (j=i-1;A[j]>A[i] && j>=0;j--)
{
A[j+1]= A[j];
}
A[j+1]= tmp;
display (A,n,i);
}
return 0;
}

int display(int A[],int n,int j)
{
printf("\n pass %d :- ",j);
int i;
for (i=0;i<n;i++)
printf("%d ",A[i]);
return 0;
}
