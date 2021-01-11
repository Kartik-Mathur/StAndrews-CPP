// StackUsingQueue
#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1;
	queue<int> q2;
public:

	void push(int data) {
		if (q1.empty() and q2.empty()) {
			q1.push(data);
		}
		else if (!q1.empty() and q2.empty()) {
			q1.push(data);
		}
		else if (q1.empty() and !q2.empty()) {
			q2.push(data);
		}
	}

	void pop() {
		if (!q1.empty() and q2.empty()) {
			// Jab tak q1 ka size 1 ke equal nahi ho jaata
			// tab tak saara data q2 mei daalo
			while (q1.size() > 1) {
				q2.push(q1.front());
				q1.pop();
			}

			q1.pop();
		}
		else if (q1.empty() and !q2.empty()) {
			while (q2.size() > 1) {
				q1.push(q2.front());
				q2.pop();
			}

			q2.pop();
		}
		else {
			cout << "Underflow" << endl;
		}
	}

	int top() {
		if (!q1.empty() and q2.empty()) {
			// Jab tak q1 ka size 1 ke equal nahi ho jaata
			// tab tak saara data q2 mei daalo
			while (q1.size() > 1) {
				q2.push(q1.front());
				q1.pop();
			}
			int ans = q1.front();
			q1.pop();
			q2.push(ans);
			return ans;
		}
		else {
			while (q2.size() > 1) {
				q1.push(q2.front());
				q2.pop();
			}
			int ans = q2.front();
			q2.pop();
			q1.push(ans);
			return ans;
		}
	}

	bool empty() {
		return q1.empty() && q2.empty();
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	s.push(6);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	return 0;
}


























