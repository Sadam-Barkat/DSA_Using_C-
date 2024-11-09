#include<iostream>
using namespace std;

struct node
{
	int data;
	node*next;
};

void Printlist(node*head)
{
	cout<<"[";
	while(head!=NULL)
	{
		cout<<head->data<<",";
		head=head->next;
	}
	cout<<"]";
}

int main(){
	node*current=NULL;
	node*head=NULL;
	node*last=NULL;
	
	current=new node;
	current->data=10;
	current->next=NULL;
	head=current;
	last=current;
	
	current=new node;
	current->data=20;
	current->next=NULL;
	last->next=current;
	last=current;
	
	current=new node;
	current->data=30;
	current->next=NULL;
	last->next=current;
	last=current;
	
	Printlist(head);
	
	return 0;
}
