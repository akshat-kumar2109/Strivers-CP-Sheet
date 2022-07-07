#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    string s;
	cin>>n;
    cin>>s;

    int i = 0, j = 1;
    for (int k = 0; k < n; k++) {
    	if (i >= s.size()) break;
    	cout << (char) s[i];
    	i += j;
    	j++;
    }

    return 0;
}