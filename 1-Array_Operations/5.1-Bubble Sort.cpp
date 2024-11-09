#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
	for(int pass=0; pass<size-1; pass++)
	{
		for(int i=0; i<size-1-pass; i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}

int main(){
	int n;
	cout<<"How Many Elemets You Want in Array : "<<endl;
	cin>>n;
	int arr[n];
	int size = sizeof(arr)/sizeof(0);
	cout<<"Enter Elements : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Array Before Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	BubbleSort(arr,size);
	cout<<"Array After Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
