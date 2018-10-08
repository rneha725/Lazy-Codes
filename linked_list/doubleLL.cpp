//Double LL:
#include <iostream>
using namespace std;

class node {
	public: 
	int val; node* next; node* prev;
	node(int a) {
		this->val=a;
		this->next=NULL;
		this->prev=NULL;
	}
	node(int a, node* prev) {
		this->val=a;
		this->next=NULL;
		this->prev=prev;
	}
};
void print(node *n) {
	while(n!=NULL) {
		cout<<n->val<<" ";
		n=n->next;
	}
}

void printrev(node * p) {
	while(p!=NULL) {
		cout<<p->val<<" ";
		p=p->prev;
	}
}
int main() {
	node *root=NULL, *newNode=NULL, *prev=NULL;
	int s;
	cin>>s;
	while(s--) {
		int a;
		cin>>a;
		if(root==NULL) {
			root=new node(a);
			prev=root;
		} else {
			newNode = new node(a, prev);
			prev->next=newNode;
			prev=newNode;
		}
	}
	print(root);
	printrev(prev);
	return 0;
}
