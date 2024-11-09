#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		int minIndex = i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[minIndex]>arr[j])
			{
				minIndex=j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

int main(){
	int n; 
	cout<<"How Manay Elements You Wants : ";
	cin>>n;
	int arr[n];
	int size = sizeof(arr)/sizeof(0);
	
	cout<<"Enter The  Elemnt : "<<endl;
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
	
	SelectionSort(arr,size);
	cout<<"Array After Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
