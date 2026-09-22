#include<stdio.h>
int linearsearch(int array[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(array[i]==key)
			return i;
	}
	return -1;
}

int main()
{
	int array[6]={3,17,9,10,30,5};
	int length=5;
	int key;
	printf("enter the number you want to search");
	scanf("%d",&key);
	int a=linearsearch(array,length,key);
	if(a!=-1)
		printf("Found at index=%d",a);
	else
		printf("Not found");
	return 0;
}
