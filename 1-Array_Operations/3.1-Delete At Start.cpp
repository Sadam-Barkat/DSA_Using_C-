#include<iostream>
using namespace std;

void DeleteAtStart(int arr[],int &size)
{
	if(size==0)
	{
		cout<<"Array is Full"<<endl;
	}
	for(int i=0; i<size-1; i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
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
	
	DeleteAtStart(arr,size);
	cout<<"Array After Deletion"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}