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
node* insertion(node*&root, int data)
{
	if(root==NULL)
	{
		root=getnewnode(data);
		return root;		
	}
	else if(data<root->data)
	{
		root->left=insertion(root->left,data);
	}
	else
	{
		root->right=insertion(root->right,data);
	}
	return root;
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
node* inorderSucc(node* root)
{
	node* curr=root;
	while(curr && curr->left!=NULL)
	{
		curr=curr->left;
	}
	return curr;
}
node* deletion(node*&root, int data)
{
	if(root==NULL)
	{
		return NULL;
	}
	else if(data<root->data)
	{
		root->left=deletion(root->left,data);
	}
	else if(data>root->data)
	{
		root->right=deletion(root->right,data);
	}
	//if data is equal to the root->data then
	else
	{
		if(root->left==NULL)
		{
			node* temp=root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL)
		{
			node* temp=root->left;
			delete root;
			return temp;
		}
		node* temp=inorderSucc(root->right);
		root->data=temp->data;
		root->right=deletion(root->right,temp->data);
	}
	return root;
}

int main(){
	node* root=NULL;
	insertion(root,50);
	insertion(root,40);
	insertion(root,30);
	insertion(root,35);
	insertion(root,25);
	insertion(root,31);
	insertion(root,32);
	insertion(root,45);
	insertion(root,60);
	insertion(root,55);
	insertion(root,70);
	insertion(root,51);
	insertion(root,58);
	insertion(root,75);
	insertion(root,80);
	deletion(root,75);
	inorder(root);
	return 0;
}
