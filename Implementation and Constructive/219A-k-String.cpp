#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int k;
    cin>>k;
    string s;
    cin>>s;

    map<char, int> mp;

    for (int i = 0; i < s.size(); i++) {
    	mp[s[i]]++;
    }

    string res = "";
    for (auto i : mp) {
    	if (i.second % k != 0) {
    		cout << -1;
    		return 0;
    	}
    	int total_occurence = i.second / k;

    	for (int j = 0; j < total_occurence; j++) {
	    	res.push_back(i.first);
	    }
    }

    for (int i = 0; i < k; i++) {
    	cout << res;
    }

    return 0;
}