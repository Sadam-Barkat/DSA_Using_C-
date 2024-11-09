#include<iostream>
using namespace std;

void insertLast(int arr[],  int size, int value)
{
	if(size==10)
	{
		cout<<"Array is full"<<endl;
	}
	arr[size]=value;
	size++;
}

int main(){
	int arr[10]={1,2,3,4,5};
	int size = 5;
	int n;
	
	//Array before insertion
	for(int i=0; i<=4; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	insertLast(arr,size,n);
	
	//Array after insertion
	for(int i=0; i<=size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	
	
	return 0;
}
