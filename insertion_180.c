#include<stdio.h>
void insertion(int array[],int n,int pos)
{
	int i;
	for(i=n;i<pos;i--)
	{
		array[i+1]=array[i];
		
	}
	array[pos]=77;
	n=n+1;
}
int main()
{
	int array[8]={2,6,9,10,30,44};
	int i;
	int n=8;
	int pos=3;
	insertion(array,n,pos);
	printf("after insertion \n");
	for(i=0;i<n;i++)
	{
		printf("%d,",array[i]);
	}
	return 0;
}
