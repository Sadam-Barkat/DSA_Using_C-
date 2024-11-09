#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int target)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[]={10,20,30,40,50};
	int size=5;
	int target;
	cout<<"Enter the value : ";
	cin>>target;
		
	int index=LinearSearch(arr,size,target);
	if(index==-1)
	{
		cout<<"Index is Not Found"<<endl;
	}
	else
	{
		cout<<"The Index is found  : "<<index<<endl;
	}
	
	return 0; 
}
