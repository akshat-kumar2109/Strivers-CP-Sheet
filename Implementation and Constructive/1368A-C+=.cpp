#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;

    while (t--) {
    	long long int a, b, n;
    	cin>>a>>b>>n;

    	long long int ans = 0;
    	while (a <= n && b <= n) {
    		if (a > b) {
    			b += a;
    		} else {
    			a += b;
    		}
    		ans++;
    	}

    	cout << ans << endl;
    }

    return 0;
}