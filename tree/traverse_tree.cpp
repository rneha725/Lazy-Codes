#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int val; node* left; node *right;
	node(int a) {
		this->val=a;
		this->left=NULL;
		this->right=NULL;
	}
	node(){}
};

void inorder(node *root) {
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->val;
	inorder(root->right);
}

void preorder(node *root) {

}

void postorder(node *root) {

}

node* takeInput(node *root) {
	root = new node();
	cout<<"Enter root: ";
	int data;cin>>data;
	root=new node(data);

	cout<<"left subtree of "<<data<<"? y: n";
	char l;cin>>l;
	if(l=='y') {
		root->left = takeInput(root->left);
	}

	cout<<"right subtree of "<<data<<"? y: n";
	char r;cin>>r;
	if(r=='y') {
		root->right = takeInput(root->right);
	}

	return root;
}
int main() {
	node *root=NULL;
	root = takeInput(root);
	inorder(root);
	return 0;
}