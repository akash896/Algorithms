#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,k,d=0,l[20][2],c=0;
float sum;
	FILE *fb;
	fb=fopen("file","r");
	if(fb==NULL)
	{
		printf("file not found");
		exit(0);
	}
	fscanf(fb,"%d",&n);
	printf("n= %d\n",n);

	int x[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	fscanf(fb,"%d",&x[i][j]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",x[i][j]);
		printf("\n");
	}

	int y[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	fscanf(fb,"%d",&y[i][j]);
	printf("\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",y[i][j]);
		printf("\n");
	}

for(i=0;i<n;i++)
{
for (j=0;j<n;j++)
sum= sum+y[i][j];
}
sum= sum/2;

printf("\n");
for(i=0;i<n;i++)
{
for (j=0;j<i;j++)    //printing lower triangular matrix
printf("%d ",y[i][j]);
printf("\n");
}
printf("\n the weight of graph is %f",sum);


 


 
	return 0;
}
