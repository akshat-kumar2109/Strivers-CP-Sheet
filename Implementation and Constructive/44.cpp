#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;

	bool one = false;
	for (int i = 0; i < n; i++)
		if (s[i] == '1') {
			one = true;
			break;
		}

	if (!one) {
		cout << n << endl;
		return;
	}

	if (s[0] == '1' || s[n-1] == '1') {
		cout << 2 * n << endl;
		return;
	}

	// from start
	int idx = -1;
	for (int i = 0; i < n; i++)
		if (s[i] == '1')
			idx = i + 1;

	int ind = -1;
	for (int i = n-1; i >= 0; i--)
		if (s[i] == '1')
			ind = n - i;

	cout << max(ind, idx) * 2 << endl;
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin>>t;

	while (t--) {
		solve();
	}

}