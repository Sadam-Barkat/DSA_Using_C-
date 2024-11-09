#include<iostream>
using namespace std;

void insertFirst(int arr[], int size, int value)
{
	if(size<0 || size>10)
	{
		cout<<"Array is Full"<<endl;
	}
	for(int i=size-1; i>=0; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=value;
	size++;
}

int main(){
	int arr[10]={1,2,3,4,5};
	int size = 5;
	int n;
	cout<<"Array Brfore Insertion"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter the number : ";
	cin>>n;
	insertFirst(arr,size,n);
	cout<<"Array After Insertion"<<endl;
	for(int i=0; i<=size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
