#include <iostream>
#include <stack>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int * arr = new int[n + 1];
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i];
		}
		int *ans = new int[n + 1];

		stack<int> s;
		for (int i = n - 1 ; i >= 0 ; i--) {
			while (!s.empty() and arr[i] >= s.top()) {
				s.pop();
			}

			if (s.empty()) {
				// ans = -1;
				ans[i] = -1;
			}
			else {
				// ans = s.top();
				ans[i] = s.top();
			}
			s.push(arr[i]);
		}

		for (int i = 0 ; i < n ; i++) {
			cout << arr[i] << ", " << ans[i] << endl;
		}
		delete[]arr;
	}

	cout << endl;
	return 0;
}








