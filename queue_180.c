#include<stdio.h>
#define size 5
int enQueue(int);
int deQueue();
int display();
int ten[size],rear=-1,front=-1;
int main()
{
	deQueue();
	enQueue(10);
	enQueue(20);
	enQueue(30);
	enQueue(40);
	enQueue(50);
	enQueue(60);
	display();
	deQueue();
	display();
	return 0;
}

void enQueue(int value)
{
	if(rear==size-1)
		printf("full \n");
	else
	{
		if(front==-1)
			front==0;
		rear++;
		ten[rear]=value;
		printf("\n inserted=%d",value);
		
	}
}

void deQueue()
{
	if(rear==-1)
		printf("\n empty \n");
	else
	{
		printf("delete %d",ten[front]);
		front++;
		if(front>rear)
			rear=front=-1;
		
	}
}

void display()
{
	if(rear==-1)
		printf("\n empty \n");
	else
	{
		printf("elements \n");
		for(int i=front;i<rear;i++)
		{
			printf("%d",ten[front]);
			
		}
		printf("\n");
	}
}






