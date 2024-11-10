#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};
class Queue
{
	private:
		node*front;
		node*rear;
    public:
    	Queue()
    	{
    		front=NULL;
    		rear=NULL;
		}
		void push(int data)
		{
			node* newnode=new node;
			newnode->data=data;
			newnode->next=NULL;
			if(rear==NULL)
			{
				front=newnode;
				rear=newnode;
			}
			else
			{
				rear->next=newnode;
				rear=newnode;
			}
		}
		void pop()
		{
			if(isEmpty())
			{
				cout<<"Queue is Empty"<<endl;
			}
			else
			{
				node* temp=front;
				front=front->next;
				if(front==NULL)
				{
					rear=NULL;
				}
				delete temp;
			}
		}
		bool isEmpty()
		{
			return front==NULL;
		}
		void display(void)
		{
			while(front!=NULL)
			{
				cout<<front->data<<" ";
			    front=front->next;
			}
		}
};
int main(){
	Queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.pop();
	q.pop();
	q.display();
	
	return 0;
}
