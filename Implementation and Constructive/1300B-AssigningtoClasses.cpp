#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        n = 2*n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        cout << arr[n / 2] - arr[n / 2 - 1] << endl;
    }

    return 0;
}