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

    int res = 0;
    for (int i = 1; i < n; i++) {
        res += i * (n - i);
    }

    res += n;

    cout << res << endl;
    
    return 0;
}