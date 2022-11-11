#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,t;
	cin>>n>>t;

	int arr[n];
	for (int i = 1; i < n; i++) {
		cin>>arr[i];
	}

	for (int i = 1; i < n; i++) {
		int temp = i + arr[i];
		if (temp == t) {
			cout << "YES" << endl;
			return 0;
		}
		i = temp - 1;
	}

	cout << "NO" << endl;
	
	return 0;
}