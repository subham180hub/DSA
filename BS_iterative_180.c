#include<stdio.h>
int BS_iterative(int array[],int x,int low,int high)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(x==array[mid])
			return mid;
		if(x>array[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}

int main()
{
	int array[6]={10,20,30,40,50,60};
	int n=6;
	int x;
	printf("enter the number you want to search");
	scanf("%d",&x);
	int result=BS_iterative(array,x,0,n-1);
	if(result==-1)
		printf("not found");
	else
		printf("found at %d",result);
	return 0;
}
