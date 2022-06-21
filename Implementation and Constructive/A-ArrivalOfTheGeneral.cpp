#include <bits/stdc++.h>
using namespace std;

int main() {

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

    int max = -1, min = INT_MAX;
    int maxIndex = -1, minIndex = -1;
    for (int i = 0; i < n; i++) {
    	if (arr[i] > max) {
    		max = arr[i];
    		maxIndex = i;
    	}
    	if (arr[i] <= min) {
    		min = arr[i];
    		minIndex = i;
    	}
    }

    int ans = 0;
    if (minIndex < maxIndex) {
    	ans = (maxIndex - 1 + n - minIndex) - 1;
    } else {
    	ans = maxIndex - 1 + n - minIndex;
    }

    cout << ans;

    return 0;
}