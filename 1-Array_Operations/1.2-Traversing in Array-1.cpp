#include<iostream>
using namespace std;

int fun(int N, int item)
{
	int A[10]={1,2,3,4};
	for(int i=0; i<10; i++)
	{
		A[N]=item;
		item++;
		N = N+1;
		if(N>15)
		{
			cout<<"Stack is full";
		}
		else
		{
			cout<<A[i]<<" ";
		}
}
}

int main(){
	fun(8,10);
	
	return 0;
}
