#include<stdio.h>
void quicksort(int array[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(array,low,high);
		quicksort(array,low,pi-1);
		quicksort(array,pi+1,high);
	}
}

int partition(int array[],int low,int high)
{
	int pivot=array[high];
	int i=(low-1);
	for(int j=low;j<high;j++)
	{
		if(array[j]<=pivot)
		{
			i++;
			swap(array[i],array[j]);
			
		}
	}
	swap(array[i+1],array[high]);
	return (i+1);
}

int main()
{
	int array[]={4,7,1,9,8,5,2,3};
	int n=sizeof(array)/sizeof(array[0]);
	quicksort(array,0,n-1);
	for(int i=0;i<n-1;i++)
	{
		printf("%d",array[i]);
	}
	return 0;
}
