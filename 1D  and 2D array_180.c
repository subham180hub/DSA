#include<stdio.h>
int main()
{
	int a[5];
	int b[2][3];
	int i,j;
	printf("enter 5 elements of 1D array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter 6 alements of 2D array \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n one element from 1D array %d",a[2]);
	printf("\n one element from 2D array %d",b[1][2]);
	
	printf("\n transversing 1D array");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n transversing 2D array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
