// StockSpan
// CelebrityProblem
#include <iostream>
#include <stack>
using namespace std;
int a[1000][1000];

bool knows(int p1, int p2) {
	if (a[p1][p2] == true) {
		// p1 knows p2
		return true;
	}
	else {
		return false;
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	int *price = new int[n];
	int *span = new int[n];

	for (int i = 0 ; i < n ; i ++) {
		cin >> price[i];
	}

	stack<int> s;
	s.push(0);
	span[0] = 1;

	for (int i = 1 ; i < n ; i++) {
		while (!s.empty() and price[i] > price[s.top()]) {
			s.pop();
		}

		if (s.size() == 0) {
			span[i] = i + 1;
		}
		else {
			span[i] = i - s.top();
		}

		s.push(i);
	}

	for (int i = 0 ; i < n ; i++) {
		cout << span[i] << " ";
	}
	cout << "END";
	return 0;
}















