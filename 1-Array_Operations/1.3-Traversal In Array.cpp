#include<iostream>
using namespace std;

void traversalElement(int arr[],int size)
{
	cout<<"Array Elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int arr[5]={1,2,3,4,5};
	int size = 5;
	
	traversalElement(arr,size);
	
	return 0;
}
