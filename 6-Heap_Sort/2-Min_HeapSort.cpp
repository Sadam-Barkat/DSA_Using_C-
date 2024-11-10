#include<iostream>
using namespace std;
void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void heapify(int arr[],int n,int i){
	int smallest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]<arr[smallest])
	     smallest=l;
	if(r<n && arr[r]<arr[smallest])
	      smallest=r;
	if(smallest != i){
		swap(arr[i],arr[smallest]);
		heapify(arr,n,smallest);
	}	       
}
void heapsort(int arr[],int n){
	for(int i=n/2-1;i>=0;i--)
	    heapify(arr,n,i);
	for(int i=n-1;i>0;i--){
	    swap(arr[0],arr[i]);
		heapify(arr,i,0);
	   printarray(arr,n);
	}    
}
int main(){
	int arr[]={7,3,5,9,4,6,8};
	//int n=sizeof(arr)/sizeof(arr[0]);
	int n=7;
	cout<<"Unsorted array :";
	printarray(arr,n);
	heapsort(arr,n);
	printarray(arr,n);
	return 0;
}