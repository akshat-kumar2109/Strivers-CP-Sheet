#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
	int a,b,c;
	cin>>a>>b>>c;

	if (c <= a) {
		cout << -1 << " ";
	} else {
		cout << 1 << " ";
	}

	if (b * a > c) {
		cout << b << endl;
	} else {
		cout << -1 << endl;
	}
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