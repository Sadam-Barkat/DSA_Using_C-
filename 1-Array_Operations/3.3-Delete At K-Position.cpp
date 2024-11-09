#include<iostream>
using namespace std;

void deleteElement(int arr[], int size, int pos)
{
	if(pos<0 || pos>size)
	{
		cout<<"Invalid Position"<<endl;
	}
	for(int i=pos; i<size; i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
}

int main(){
	int arr[10]={1,2,3,4,5};
	int size = 5;
	int pos;
	
	cout<<"Array Bofore Deletion"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter The Position Of Element : ";
	cin>>pos;
	deleteElement(arr,size,pos);
	cout<<"Array After Deletion"<<endl;
	for(int i=0; i<size-1; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
