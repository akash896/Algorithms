#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *p;
};
int main()
{
	int i,j,n,x;
	FILE *fb;
	fb=fopen("file","r");
	if(fb==NULL)
	{
		printf("file not found");
		exit(0);
	}
	fscanf(fb,"%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fscanf(fb,"%d",&x);
			printf("%3d",x);
		}
		printf("\n");
	}
	return 0;
}
