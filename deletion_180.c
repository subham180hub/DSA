#include<stdio.h>
void deletion(int array[],int n,int pos)
{ 
	int i;
	for(i=pos;i<n-1;i++)
	{
		array[i]=array[i+1];
	}	
	n=n-1;
}

int main()
{
	int array[8]={5,9,7,4,10};
	int i;
	int n=5;
	int pos=2;
	deletion(array,n,pos);
	printf("after deletion \n");
	for(i=0;i<n;i++)
	{
		printf("%d,",array[i]);
	}
	return 0;
	
}
