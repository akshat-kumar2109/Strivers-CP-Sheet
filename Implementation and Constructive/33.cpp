#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n,m;
    cin>>n>>m;

    int diff = m / n;

    if (m % n != 0) {
    	cout << -1;
    } else {
    	int count = 0;
    	while (diff % 2 == 0) {
    		diff /= 2;
    		count++;
   		}
   		while (diff % 3 == 0) {
	   		diff /= 3;
	    	count++;
		}
    	if (diff == 1) {
    		cout << count;
    	} else {
    		cout << -1;
    	}
    }

    return 0;
}