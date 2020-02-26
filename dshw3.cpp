#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data; /* value of node */
	node* next; /* pointer to the next element */
};

void printList(node* L)
{
	node* p = L; /* p points to current node to be printed. */
	while (p != NULL) {
		/* print data at p; update p to next node to be printed. */
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

}

int main()
{
	int x; /* holds input. */
	node* L = NULL; /* pointer to beginning of list */
	while (cin >> x) {
		/* find where n goes: */
		node* q = L; /* looks for first value larger than x */
		node* p = NULL; /* p points to node before q */
		while (q != NULL && q->data < x) {
			/* advance q,p */
			p = q;
			q = q->next;
		}
		/* now add new node between p and q: */
		node* n = new node;
		n->data = x;
		n->next = q;
		if (p == NULL) { /* x goes at very beginning. */
			L = n;
		} else { /* not at very beginning */
			p->next = n;
		}
	}
	printList(L);
	removeDuplicate(L);
	//cout << "trying to remove 7...\n";
	//remove(L,7);
	printList(L);
	return 0;
}