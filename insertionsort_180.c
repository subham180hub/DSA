#include<stdio.h>
void insertionsort(int array[],int size)
{
	for(int step=1;step<size;step++)
	{
		int key=array[step];
		int j=step-1;
		while(j>=0 && key<array[j])
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
		printf("\n internal array \n");
		for(int i=0;i<size;i++)
		{
			printf("%d,",array[i]);
		}
	}
}

int main()
{
	int array[8]={3,7,1,9,4,8,6,2};
	int size=sizeof(array)/sizeof(array[0]);
	insertionsort(array, size);
	printf("\n sorted array: \n");
	for(int i=0;i<size;i++)
	{
		printf("%d,",array[i]);
	}
	return 0;
}
