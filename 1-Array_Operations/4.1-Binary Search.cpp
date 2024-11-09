#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size, int n)
{
	int left = 0; 
	int right = size-1;
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(arr[mid]==n)
		{
			return mid;
		}
		else if(arr[mid]<n)
		{
			left = mid+1;
		}
		else
		{
			right = mid-1;
		}
	}
	return -1;
}

int main(){
	int arr[5]={10,20,30,40,50};
	int size = 5;
	int n;
	cout<<"Enter The Value : ";
	cin>>n;
	int index = BinarySearch(arr,size,n);
	
	if(index==-1)
	{
		cout<<"Index Not Found!"<<endl;
	}
	else
	{
		cout<<"The Index Of Given Value Is : "<<index<<endl;
	}
	
	
	return 0;
}
