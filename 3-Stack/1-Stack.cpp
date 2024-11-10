#include<iostream>
using namespace std;
#define n 5
class stack
{
	private:
		int *arr;
		int top;
	public:
	    stack()
	    {
	    	arr=new int[n];
	    	top=-1;
		}
		void push(int a)
		{
			if(top==n-1)
			{
				cout<<"Stack is full"<<endl;
			}
			else
			{
				top++;
				arr[top]=a;
			}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"Stack is empty"<<endl;
			}
			else
			{
				top--;
			}
		}
		void Top()
		{
			if(top==-1)
			{
				cout<<"Stack is empty"<<endl;
			}
			else
			{
				cout<<"Top Element is : "<<arr[top]<<endl;
			}
		}
		void empty()
		{
		    if(top==-1)
		    {
		    	cout<<"Stack is empty"<<endl;
			}
			else
			{
				cout<<"No empty"<<endl;
			}
		}
		void display(void)
		{
			for(int i=0; i<top+1; i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};
int main(){
	stack s1;
	stack s2;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.display();
	
	return 0;
}
