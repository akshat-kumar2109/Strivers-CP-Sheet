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

    	int i;
    	for (i = 0; i < s.size(); i++) {
    		if (s[i] == '1') break;
    	}

    	int res = 0;
    	int j = i + 1;
    	while (j < s.size()) {
    		if (s[j] == '1') {
    			res += j - i - 1;
    			i = j;
    		}
    		j++;
    	}

    	cout << res << endl;
    }

    return 0;
}