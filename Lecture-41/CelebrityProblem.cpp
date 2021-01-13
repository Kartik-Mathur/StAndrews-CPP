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

	stack<int> s;

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			cin >> a[i][j];
		}

		s.push(i);
	}

	while (s.size() > 1) {
		int p1 = s.top();
		s.pop();

		int p2 = s.top();
		s.pop();

		if (knows(p1, p2)) {
			// p1 cannot be a celeb
			s.push(p2);
		}
		else {
			// p2 cannot be a celeb
			s.push(p1);
		}
	}

	int p = s.top();
	s.pop();

	for (int i = 0 ; i < n ; i ++) {
		if (i != p && (knows(p, i) || !knows(i, p))) {
			// p cannot be a celeb
			cout << "No Celebrity";
			return 0;
		}
	}

	cout << p << endl;
	return 0;
}















