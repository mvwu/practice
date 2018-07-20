#include <iostream>
#define SIZE 10

/* a stack is first in, last out, or filo*/

int stack[SIZE];
int top = -1;

void push(int value)
{
	if(top < SIZE-1)
	{
		if(top < 0)
		{
			stack[0] = value;
			top = 0;
		}
		else
		{
			stack[top+1] = value;
			top++;
		}
	}
	else
	{
		cout << "Stackoverflow!!!\n";
	}
}

/*removes the item at top of stack*/
int pop()
{
	if(top >= 0)
	{
		int n = stack[top];
		top--;
		return n;
	}
}

int Top()
{
	return stack[top];
}

int isempty()
{
	return top < 0;
}

void display()
{
	for(int i = 0; i <=top; i++)
	{
		cout << "%d\n" << stack[i]; 
	}
}

int main(){
	push(4);
	push(8);
	display();
	pop();	
	display();
	return 0;
}
