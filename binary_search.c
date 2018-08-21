#include<stdio.h>
int bs(int [], int, int, int);

int main()
{
	int i,n,s,l,h,k,small,j,temp,z,v[100];
	int A[100];
		printf("\n enter the no.of elements in the array");
	scanf("%d",&n);
	l=0;
	h=n-1;
		printf("\n enter the no.s");
			for(i=0;i<n;i++)
			scanf("%d",&A[i]);

	printf("\n enter the no. of times to search");
	scanf("%d",&z);

	printf("\n enter the no. to be searched");
			for(i=0;i<z;i++)
			scanf("%d",&v[i]); 

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
	}
i= 0;
	while(i<z)
	{
		printf("\n enter the no to be searched");
		scanf("%d",&s);
		k= bs(A,l,h,v[i]);
			if (k==1)
			printf("n0 is found");
			else
			printf("\n no. not found");
	i++;	
	}
return 0;
}
int bs(int A[],int l, int h, int s)
{
	int mid;
	mid = (l+h)/2;

	if(l>h)
	return 0;

	else 
	{
		if(A[mid]==s)
		return 1;

		else 
		{	
			if (s<A[mid])
			{
			h = mid-1;
			return bs(A,l,h,s);
			}
			else
			{
			l= mid+1;
			return bs(A,l,h,s);
			}
		}
	}
}



