#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	printf("after access");
	printf("%d",*(arr+3));
	return 0;
}
