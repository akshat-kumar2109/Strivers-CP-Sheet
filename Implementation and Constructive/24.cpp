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
    	int x;
    	cin>>x;

    	int digit = 0;
    	int countDigit = 0;
    	while(x > 0) {
    		digit = x % 10;
    		x /= 10;
    		countDigit++;
    	}

    	cout << ((digit - 1) * 10) + ((countDigit * (countDigit + 1)) / 2) << endl; 
    }

    return 0;
}