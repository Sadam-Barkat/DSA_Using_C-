#include<iostream>
using namespace std;
#define n 5
class Queue
{
	private:
		int*arr;
		int rear;
		int front;
	public:
	    Queue()	
	    {
	    	arr=new int[n];
	    	rear=-1;
	    	front=-1;
		}
		void push(int data)
		{
			if((front==-1 && rear==n-1) || (front==rear+1))
			{
				cout<<"Queue is full"<<endl;
			}
			else
			{
				if(front==-1)
				{
					front=0;
					rear=0;
				}
				else if(rear==n-1 && front!=-1)
				{
					rear=0;
				}
				else
				{
					rear++;
				}
				arr[rear]=data;
			}
		}
		void pop()
		{
			if(isEmpty())
			{
				cout<<"Queue is emty"<<endl;
			}
			else 
			{
				if(front==rear)
				{
					front=-1;
					rear=-1;
				}
				else if(front==n-1)
				{
					front=0;	
				}
				else
				{
					front++;
				}
			}
		}
		void display()
		{
			if(isEmpty())
			{
				cout<<"Queue is emty"<<endl;
			}
			else if(front<=rear)
			{
				while(front<=rear)
				{
					cout<<arr[front]<<" ";
				    front++;
				}
			}
			else 
			{
				while(front<=n-1)
				{
					cout<<arr[front]<<" ";
					front++;
				}
				front=0;
				while(front<=rear)
				{
					cout<<arr[front]<<" ";
					front++;
				}
				cout<<endl;
			}
		}
		bool isEmpty()
		{
			if(front==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main(){
	Queue s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
    s.push(50);
    s.push(90);
	
	
	return 0;
}
