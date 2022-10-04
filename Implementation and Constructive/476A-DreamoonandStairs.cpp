#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,m;
	cin>>n>>m;

	int start = n / 2;
	for (int i = start; i <= n; i++) {
		if (i % m == 0) {
			cout << i << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	
	return 0;
}