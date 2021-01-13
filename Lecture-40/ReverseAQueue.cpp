// ReverseAQueue
#include <iostream>
#include <queue>
using namespace std;

void ReverseQueue(queue<int> &q) {
	// base case
	if (q.empty()) {
		return;
	}

	// recursive case // q->1,2,3,4
	int pick = q.front(); // pick = 1
	q.pop(); // q->2,3,4
	ReverseQueue(q); // q->4,3,2
	q.push(pick); // q->4,3,2,1
}

void PrintQueue(queue<int> q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	PrintQueue(q);
	ReverseQueue(q);
	PrintQueue(q);


	return 0;
}

















