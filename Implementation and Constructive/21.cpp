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
    for (int i = 0; i < n; i++) {
    	cin>>arr[i];
    }

    if (n == 1) {
    	cout << 1;
    	return 0;
    }

    int i = 0, j = 1;
    int res = 1;
    while (j < n) {
    	if (arr[j] > arr[j - 1]) {
    		res = max(res, j - i + 1);
    		j++;
    	} else {
    		i = j;
    		j = i + 1;
    	}
    }

    cout<<res;

    return 0;
}