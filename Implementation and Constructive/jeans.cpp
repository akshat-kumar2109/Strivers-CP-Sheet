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
    	string s;
    	cin>>s;

    	int hash[10];
    	memset(hash, 0, sizeof(hash));

    	for (int i = 0; i < s.size(); i++) {
    		hash[s[i] - '0']++;
    	}

    	int ans = -1;
    	int ansIdx = -1;
    	for (int i = 0; i < 10; i++) {
    		if (hash[i] > ans) {
    			ans = hash[i];
    			ansIdx = i;
    		}
    	}

    	cout << ansIdx << endl;
    }

    return 0;
}