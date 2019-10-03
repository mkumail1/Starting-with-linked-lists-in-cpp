
#include <iostream>

using namespace std;



struct node
{
public:
	int val;
	node *next;

	node()
	{
		val = 0;
		next = NULL;
	}
	node(int i, node *in)
	{
		val = i;
		next = in;
	}
};

class linkedList{
public:	
	int len = 0;
	node *head, *tail;

	linkedList()
	{
		head = NULL;
		tail = NULL;
	}
		
	public:
		bool isEmpty()
		{
			if (head == NULL)
				return head;
		}

		void addNodeEnd(int x)
		{
			node *temp = new node(x, NULL);
			if (head == NULL)
			{
				head = tail = temp;
			}
			else
			{
				tail->next = temp;
				tail = tail->next;
				len++;
			}
		}
		
		void deleteNodeAt(int a)
		{
			node *current, *p;
			current = head;
			if (head == NULL)
			{
				return;
			}
			else
			{
				for (int b = 0; b < a-1; b++)
				{
					p = current;
					current = current->next;
				}
				p->next = current->next;
				delete current;
				len--;
			}
		}

		void displayList()
		{
			node *current;
			current = head;
			while (current)
			{
				cout << current->val << " ";
				current = current->next;
			}
			
		}
};



int main()
{
	linkedList ax;
	int in, x;
	
	do
	{
		cout << "\nEnter 1 to enter value, 0 to exit: \n";
		cin >> in;

		switch (in)
		{
		case 0:
			break;
		case 1:
			
			cout << "\nEnter a value: \n";
			cin >> x;

			ax.addNodeEnd(x);
			break;
		case 2:
			cout << "delete the value of node at: \n";
			cin >> x;
			ax.deleteNodeAt(x);
			break;
		case 3:
			ax.displayList();
			break;
		default:;
		}

	}while (in != 0);

}

