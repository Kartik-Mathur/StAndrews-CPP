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
		stack<int> s;

		char a[10];
		cin >> a;

		for (int i = 0 ; i <= strlen(a) ; i++) {
			s.push(i + 1);

			if (i == strlen(a) || a[i] == 'I') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
			}
		}
		cout << endl;
	}
	return 0;
}















