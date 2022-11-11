#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
	int n;
	cin>>n;

	int res[n];
	for (int i=0;i<n;i++) {
		int t;
		cin>>t;
		res[t - 1] = i + 1;
	}

	for (auto ele : res)
		cout << ele << " ";
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	// cin>>t;

	while (t--) {
		solve();
	}

}