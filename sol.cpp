#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int p, n;
	cin >> p >> n;
	// create a set for unique elements
	set<int> s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		// check if x mod p is already in the set
		if (s.find(x % p) != s.end()) {
			// if true, then print i + 1 to show where the conflict happened
			cout << i + 1 << '\n';
			return 0;
		}
		// otherwise, insert it into the set
		s.insert(x % p);
	}
	// if no conflict happened, then print -1
	cout << -1 << '\n';
	return 0;
}
