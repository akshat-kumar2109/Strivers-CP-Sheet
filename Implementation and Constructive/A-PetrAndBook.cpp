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

	int arr[7];
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	int i = 0;
	while (sum < n) {
		sum += arr[i];
		if (sum >= n) break;
		i = (i + 1) % 7;
	}

	cout << i + 1;

    return 0;
}