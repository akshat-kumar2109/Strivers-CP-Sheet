#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;

	int arr[n];
	for (int i=0; i<n; i++)
		cin>>arr[i];

	int curr_min = arr[n-1] - 1;
	int res = arr[n-1];
	for (int i = n - 2; i >= 0; i--) {
		if (curr_min < 0) break;
		// cout << curr_min << " " << res << endl;
		if (arr[i] <= curr_min) {
			curr_min = arr[i] - 1;
			res += arr[i]; 
		} else {
			res += curr_min;
			curr_min--;
		}
	}
	
	cout << res << endl;

	return 0;
}