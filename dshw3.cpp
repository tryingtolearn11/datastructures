#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data;
	node* next;
};

void printList(node* L)
{
	node* p = L;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}

void removeDuplicate(node*& L)
{
	node* q = L;
	node* p = NULL;
	while (q->next != NULL) {
		if (q->data == q->next->data) {
			p = q->next->next;
			delete(q->next);
			q->next = p;
		}
		else
			q = q->next;
	}
}



int main()
{
	int x; //take input
	node* L = NULL;
	while (cin >> x) {
		//search for spot
		node* q = L; //q looks ahead
		node* p = NULL; // looks behind x
		while (q != NULL && q->data < x) {
			p = q;
			q = q->next;
		}
		//we found, now add
		node* n = new node;
		n->data = x;
		n->next = q;
		if (p == NULL) {  //if list empty, add to the start
			L = n;
		} else {
			p->next = n;
		}
	}
	//printList(L);
	removeDuplicate(L);
	printList(L);
	return 0;
}