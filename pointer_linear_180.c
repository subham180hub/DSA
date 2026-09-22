 #include<stdio.h>
int linear(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(arr+i)==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[6]={10,20,30,40};
	int n=5;
	int key=30;
	int result=linear(arr,n,key);
	if(result !=-1)
	{
		printf("found at %d",result);
	}
	else
	{
		printf("not found");
	}
	return 0;
}
