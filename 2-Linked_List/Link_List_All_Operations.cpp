#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};
//*******************************  Insertion In Linklist **************************************
void insert_at_start(node*&head,int data)
{
	node*newnode=new node;
	newnode->data=data;
	newnode->next=head;
	head=newnode;
	
}
void insert_at_last(node*&head,int data)
{
	node*newnode=new node;
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	else
	{
		node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void insert_at_pos(node*&head,int data,int pos)
{
	node*newnode=new node;
	newnode->data=data;
	if(pos==0)
	{
		newnode->next=head;
		head=newnode;
		return;
	}
	node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; ++i)
	{
        temp = temp->next;
    }

    if (temp == NULL)
	{
        cout << "Position out of bounds" << endl;
        delete newnode;
    } 
	else
	{
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
//************************************  Deletion In Linklist **************************************
void delete_at_start(node*&head)
{
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
	}
	head=head->next;
}
void delete_at_last(node*head)
{
	if(head==NULL)
	{
		cout<<"List is empty";
	}
	if(head->next==NULL)
	{
		delete head;
		head=NULL;
		return;
	}
	while(head->next->next!=NULL)
	{
		head=head->next;
	}
	delete head->next;
	head->next=NULL;
}
void delete_at_pos(node*head,int pos)
{
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
	}
	if(pos==1)
	{
		head=head->next;
	}
	node* temp=head;
	for(int i=1; i<pos-1 && temp!=NULL; i++)
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{
		cout<<"Position is out of Bound"<<endl;
	}
	else
	{
	    node* node_to_delete=temp->next;
	    temp->next=temp->next->next;
	    delete node_to_delete;
	}
}
//************************************  Display Linklist *******************************************
void print_list(node*head)
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
	node* head=NULL;
	insert_at_start(head,10);
	insert_at_start(head,50);
	print_list(head);
	insert_at_last(head,20);
	insert_at_last(head,30);
	insert_at_last(head,40);
	insert_at_pos(head,100,4);
	insert_at_start(head,60);
	insert_at_last(head,200);
	print_list(head);
	delete_at_start(head);
	print_list(head);
	delete_at_start(head);
	print_list(head);
	delete_at_last(head);
	print_list(head);
	delete_at_pos(head,4);
	print_list(head);
	
	
	return 0;
}
