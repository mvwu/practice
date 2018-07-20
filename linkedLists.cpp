/*for singly linked list*/
#include <iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

class linked_list
{
private:
	node *head, *tail;
public:
	linked_list()
	{
		head = NULL;
		tail = NULL;
	}
	
	void add_node(int n)
	{
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;
		
		if(head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = tail->next;
		}
	}
	
	node* gethead()
	{
		return head;
	}
	
	void display(node *head)
	{
		if(head == NULL)
		{
			cout << "NULL" << endl;
		}
		else
		{
			cout << head->data << endl;
			display(head->next);
		}
	}
	
	static void concatenate(node *a, node* b)
	{
		if( a != NULL && b != NULL)
		{
			if (a->next == NULL)
				a->next = b;
			else
				concatenate(a->next,b);
		}
		else
		{
			cout << "Either a or b is NULL" << endl;
		}
	}
	
	/* front adds a node to the front of the linked list*/
	void front(int n)
	{
		node *temp = new node;
		temp ->data = n;
		temp->next = head;
		head = temp;
	}
	
	/*add_node adds a node to the tail end of the linked list*/
	void add_node(int n)
	{
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;
		
		if(head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = tail->next;
		}
	}
	
	/*after adds a node after the node parameter*/
	void after(node *a,int value)
	{
		node* p = new node;
		p->data = value;
		
		/* Sets the new node's next to the next of a
		   then set a's next to p
		 */
		p->next = a->next;
		a->next = p;
	}
	
};

int main()
{
	linked_list a;
	a.add_node(1);
	a.add_node(2);
	
	linked_list b;
	b.add_node(3);
	b.add_node(4);
    linked_list::concatenate(a.gethead(),b.gethead());
    a.display(a.gethead());
	
	return 0;
}
