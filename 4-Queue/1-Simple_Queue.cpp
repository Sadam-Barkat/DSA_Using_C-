#include<iostream>
using namespace std;
#define n 5

class Queue
{
	private:
		int *arr;
		int first;
		int rear;
	public:
	    Queue()	
	    {
	    	arr=new int[n];
	    	first=0;
	    	rear=0;
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"Queue is Full"<<endl;
			}
			else
			{
				arr[rear]=val;
				rear++;
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
		    	first++;
		     }
	    }
		bool isFull()
		{
			if(first==0 && rear==n)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool isEmpty()
		{
			if(first==0 && rear==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void print(void)
		{
			for(int i=first; i<rear; i++)
			{
				cout<<arr[first]<<" ";
				first++;
			}
		}
};
int main(){
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
    q.pop();
		
	return 0;
}
