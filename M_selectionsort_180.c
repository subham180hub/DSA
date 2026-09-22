#include<stdio.h>
void M_selectionsort(int array[],int start, int end)
{
	while(start<end)
	{
		int min_idx=start;
		int max_idx=start;
		for(int i=start;i<=end;i++)
		{
			if(array[i]<array[min_idx])
				min_idx=i;
			if(array[i]>array[max_idx])
				max_idx=i;
			
		}
		int temp1=array[start];
		array[start]=array[min_idx];
		array[min_idx]=temp1;
		if(max_idx=start)
			max_idx=min_idx;
		int temp2=array[end];
		array[end]=array[max_idx];
		array[max_idx]=temp2;
		start++;
		end--;
	}
}

int main()
{
	int data[]={6,4,7,8,1,9,5};
	int size=sizeof(data)/sizeof(data[0]);
	M_selectionsort(data,0,size-1);
	printf("sorted array \n");
	for(int i=0;i<size;i++)
	{
		printf("%d",data[i]);
		
	}
	return 0;
}
