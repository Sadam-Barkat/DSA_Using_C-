#include<iostream>
using namespace std;

void insert_At_K_Position(int arr[],int size, int pos, int value)
{
	if(pos<0 || pos>10)
	{
		cout<<"Invalid Position";
	}
	if(size==10)
	{
		cout<<"Array is Full";
	}
	for(int i=size-1; i>=pos; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=value;
	size++;
}

int main(){
	int arr[10]={1,2,3,4,5};
	int size = 5;
	int n,pos;
	cout<<"Array Before Insertion"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Enter the Position : ";
	cin>>pos;
	insert_At_K_Position(arr,size,pos,n);
	cout<<"Array After Insertion"<<endl;
	for(int i=0; i<=size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	 
	return 0;
}
