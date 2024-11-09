#include<iostream>
using namespace std;

void Merge(int arr[], int left, int mid, int right)
{
	int n1=(mid-left)+1;
	int n2=right-mid;
	
	int L[n1], R[n2];
	
	//put values for left half array
	for(int i=0; i<n1; i++)
	{
		L[i]=arr[left+i];
	}
	
	//put values for right half array
	for(int j=0; j<n2; j++)
	{
		R[j]=arr[mid+1+j];
	}
	
	//Mergign L[n1] and R[n2]
	int i=0, j=0, k=left; 
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=R[j];
			j++;
			k++;
		}
	}
	
	while(i<n1)
	{
		arr[k]=L[i];
		i++; 
		k++;
	}
	
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void Mergesort(int arr[],int left, int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2;
		
		//recursive call for left half
		Mergesort(arr, left, mid);
		
		//recursive call for right half
		Mergesort(arr, mid+1, right);
		
		//call for merging two sorted arrays
		Merge(arr, left, mid, right);
	}
}

int main(){
	int arr[]={6,3,9,5,2,8,7,1};
	int size =sizeof(arr)/sizeof(0);
	
	cout<<"Array Before Sorting"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
    Mergesort(arr,0,size-1);
    cout<<"Array After Sorting"<<endl;
    for(int i=0; i<size; i++)
    {
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
