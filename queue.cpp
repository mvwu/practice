#include <iostream>
#define MAXSIZE 10

using namespace std;

int queue[MAXSIZE];

int front = -1;
int rear = -1;
int size = -1;

int isempty()
{
	return size<0;
}

int isfull()
{
	return size == MAXSIZE;
}

/*enqueue adds an element into the queue*/
void enqueue(int value)
{
	if(size<MAXSIZE)
	{
		if(size<0)
		{
			queue[0] = value;
			front = rear = 0;
			size = 1;
		}
		else if(rear == MAXSIZE-1)
		{
			queue[0] = value;
			rear = 0;
			size++;
		}
		else
		{
			queue[rear+1] = value;
			rear++;
			size++;
		}
		
	}
	else
	{
		cout << "Queue is full\n";
	}
}

/*dequeue, simply decreases size by 1 nad increases front by 1*/
int dequeue()
{
	if(size<0)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		size--;
		front++;
	}
}

int Front()
{
	return queue[front];
}

void display()
{
	int i;
	if(rear >= front)
	{
		for(i = front; i <=rear; i++)
		{
			cout << "%d\n" << queue[i];
		}
	}
	else
	{
		for(i=front; i< MAXSIZE; i++)
		{
			cout << "%d\n" << queue[i];
		}
		for(i=0; i<=rear; i++)
		{
			cout << "%d\n" << queue[i];		
		}
	}
}

int main()
{
	enqueue(4);
	enqueue(8);
	enqueue(10);
	enqueue(20);
	display();
	dequeue();
	cout << "After dequeue" << endl;
	display();
	enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    dequeue();
    enqueue(90);
    enqueue(100);
    enqueue(110);
    enqueue(120);
    cout << "After enqueue" << endl;
    display();
    return 0;
}

