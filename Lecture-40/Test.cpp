#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL) {}
};

class Queue {
	node* f, *e;
public:
	Queue(): f(NULL), e(NULL) {}

	int front() {
		return f->data;
	}

	void pop() {
		if (f == NULL) {
			return;
		}
		else if (f->next == NULL) {
			delete f;
			f = e = NULL;
		}
		else {
			node* temp = f;
			f = f->next;
			delete temp;
		}
	}

	void push(int d) {
		if (f == NULL) {
			f = e = new node(d);
		}
		else {
			node* n = new node(d);
			e->next = n;
			e = n;
		}
	}

	bool empty() {
		return f == NULL;
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;
	return 0;
}















