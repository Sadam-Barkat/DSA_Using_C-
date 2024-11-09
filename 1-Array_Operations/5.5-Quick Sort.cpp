#include<iostream>
using namespace std;

void swap(int arr[],int a, int b)
{
	int temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}

int prtition(int arr[],int left,int right)
{
	int pivot=arr[right];
	int i=left-1;
	for(int j=left; j<right; j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,right);
	return i+1;
}

void QuickSort(int arr[], int left, int right)
{
	if(left<right)
	{
		int pi=prtition(arr,left,right);
		QuickSort(arr,left,pi-1);
		QuickSort(arr,pi+1,right);
	}
}

int main(){
	int arr[]={4,3,5,2,6,1};
	int size=sizeof(arr)/sizeof(0);
	
	cout<<"Array Before Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	QuickSort(arr,0,size-1);
	cout<<"Array After Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
