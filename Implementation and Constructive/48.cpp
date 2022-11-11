#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
	int n,k;
	cin>>n>>k;

	int arr[n];
	int t[n];
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
		t[i] = arr[i];
	}

	sort(arr, arr + n);
	unordered_set<int> set;

	for (int i = 0; i < n; i++) {
		if (arr[i] > k) break; 
		for (int j = 0; j < n; j++) {
			if (t[j] == arr[i] && set.find(j + 1) == set.end()) {
				set.insert(j + 1);
				break;
			}
		}
		k = k - arr[i];
	}

	cout << set.size() << endl;
	for (int ele : set)
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