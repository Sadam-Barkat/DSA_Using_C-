#include<iostream>
using namespace std;

int DeleteAtEnd(int arr[],int &size)
{
	if(size==0)
	{
		cout<<"Array is Empty"<<endl;
	}
	else
	{
		return size--;
	}
}

int main(){
	int arr[]={1,2,3,4,5};
	int size=5;
	
	cout<<"Array Before Deletion"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	DeleteAtEnd(arr,size);
	cout<<"Array After Deletion"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
