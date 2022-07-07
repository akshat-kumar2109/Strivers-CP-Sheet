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

    while (t--) {
    	int n;
    	cin>>n;

    	cout << 2 << endl;
    	cout << n << " " << n - 1 << endl;
    	n = ceil((n + (n - 1)) / (double) 2); 	
    	while (n > 2) {
    		cout << n << " " << n - 2 << endl;
    		n = (n + (n - 2)) / 2;
    	}
    }

    return 0;
}