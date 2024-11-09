#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
	for(int i=1; i<size; i++)
	{
		int key = arr[i];
		int j = i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j = j-1;
		}
		arr[j+1]=key;
	}
}

int main(){
	int n;
	cout<<"How Many Elements You Want In Array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter The Elements :"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int size = sizeof(arr)/sizeof(0);
	
	cout<<"Array Bofore Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	InsertionSort(arr,size);
	cout<<"Array After Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
