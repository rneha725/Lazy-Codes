//singly LL
#include <iostream>
using namespace std;

class node {
	public: 
	int val; node* next;
	node(int a) {
		this->val=a;
		this->next=NULL;
	}
};
void print(node *n) {
	while(n!=NULL) {
		cout<<n->val<<" ";
		n=n->next;
	}
}
int main() {
	node *root=NULL, *newNode=NULL, *cur=NULL;
	int s;
	cin>>s;
	while(s--) {
		int a;
		cin>>a;
		if(root==NULL) {
			root=new node(a);
			cur=root;
		} else {
			newNode=new node(a);
			cur->next=newNode;
			cur=cur->next;
		}
	}
	print(root);
	return 0;
}
