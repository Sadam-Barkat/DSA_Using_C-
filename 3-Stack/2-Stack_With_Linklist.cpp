#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};
class stack
{
	private:
		node* head;
		int stackSize;
	public:
	    stack()	
	    {
	    	head=NULL;
	    	stackSize=0;
		}
		void push(int data)
		{
			node* newnode=new node;
			newnode->data=data;
			newnode->next=head;
			head=newnode;
			stackSize++;
		}
		void pop()
		{
			if(isEmpty())
			{
				cout<<"Stack is Empty"<<endl;
			}
			else
			{
				head=head->next;
				stackSize--;
			}
		}
		void top()
		{
			if(isEmpty())
			{
				cout<<"Stak is Empty"<<endl;
			}
			else
			{
				cout<<"Top Element is : "<<head->data<<endl;
			}
		}
		bool isEmpty()
		{
			if(head==NULL)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		int size()
		{
			cout<<"Stack Size is : "<<stackSize<<endl;
		}
		void display(void)
		{
			while(head!=NULL)
			{	
			    cout<<head->data<<" ";
			    head=head->next;
			}
		}
};
int main(){
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.top();
	s.size();
	s.pop();
	
	
	return 0;
}
