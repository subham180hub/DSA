#include<stdio.h>
int BS_recursion(int array[],int x,int low,int high)
{
	if(high>=low)
	{
		int mid=low+(high-low)/2;
		if(x==array[mid])
			return mid;
		if(x>array[mid])
			return BS_recursion(array,x,mid+1,high);
		else
			return BS_recursion(array,x,low,mid-1);
			
	}
	return -1;
}

int main()
{
	int array[6]={10,20,30,40,50,60};
	int n=10;
	int x;
	printf("enter the number you want to search");
	scanf("%d",&x);
	int result=BS_recursion(array,x,0,n-1);
	if(result==-1)
		printf("Not found");
	else
		printf("Found at %d",result);
	return 0;
}
