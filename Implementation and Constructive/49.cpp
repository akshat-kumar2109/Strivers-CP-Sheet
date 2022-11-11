#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
	int n;
	cin>>n;

	int arr[n];
	int odd = 0;
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
		if (arr[i] % 2 != 0) odd++;
	}

	odd /= 2;

	for (auto ele : arr) {
		if (ele % 2 != 0) {
			if (odd > 0) {
				ele--; odd--;
			} else {
				ele++;
			}
		}
		cout << ele / 2 << endl;
	}
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