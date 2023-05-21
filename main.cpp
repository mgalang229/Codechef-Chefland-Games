#include <bits/stdc++.h>
using namespace std;

void solve() {
	bool in = true;
	for (int i = 0; i < 4; i++) {
		int x;
		cin >> x;
		in &= (x == 0);
	}
	cout << (in ? "IN" : "OUT") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--)
		solve();
}
