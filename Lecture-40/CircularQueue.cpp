// CircularQueue
#include <iostream>
using namespace std;

class Queue {
private:
	int *arr;
	int n;
	int cs;
	int f;
	int e;
public:
	Queue(int s = 5) {
		n = s;
		cs = 0;
		arr = new int[n];
		f = 0;
		e = -1;
	}

	int front() {
		return arr[f];
	}

	void push(int data) {
		if (cs < n) {
			e = (e + 1) % n;
			arr[e] = data;
			cs++;
		}
		else {
			cout << "Queue Overflow" << endl;
		}
	}

	void pop() {
		if (cs > 0) {
			cs--;
			f = (f + 1) % n;
		}
		else {
			cout << "Queue Underflow" << endl;
		}
	}

	bool empty() {
		return cs == 0;
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Queue q(7);

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}


	cout << endl;
	return 0;
}














