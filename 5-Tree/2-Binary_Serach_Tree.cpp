#include<iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};
node* getnewnode(int data)
{
	node* newnode=new node;
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
node* insertion(node*&root,int data)
{
	if(root==NULL)
	{
		root=getnewnode(data);
	}
	else
	{
		if(data<root->data)
		{
			root->left=insertion(root->left,data);
		}
		else
		{
			root->right=insertion(root->right,data);
		}
	}
	return root;
}
node* searching(node*&root,int data)
{
	if(root==NULL)
	{
		return NULL;
	}
	else if(data==root->data)
	{
		return root;
	}
	else if(data<root->data)
	{
		root->left=searching(root->left,data);
	}
	else if(data>root->data)
	{
		root->right=searching(root->right,data);
	}
	else
	{
		return NULL;
	}
}
void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<",";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<",";
	inorder(root->right);
	
}
void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<",";
}
int main(){
	node* root=NULL;
	insertion(root,10);
	insertion(root,5);
	insertion(root,15);
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	node* p=searching(root,5);
	if(p==NULL)
	{
		cout<<"Element is not found"<<endl;
	}
	else
	{
		cout<<"Element is found : "<<p->data<<endl;
	}
	
	return 0;
}
