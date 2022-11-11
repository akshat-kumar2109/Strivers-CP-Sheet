#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    unordered_set<char> set;

    set.insert('a');
    set.insert('o');
    set.insert('y');
    set.insert('e');
    set.insert('u');
    set.insert('i');

    string s;
    cin>>s;

    string ans = "";
    for (int i = 0; i < s.size(); i++){
    	if (isupper(s[i])) {
    		s[i] = s[i] + 32;
    	}
    	if (set.find(s[i]) == set.end()) {
    		// consonant
    		ans.push_back('.');
    		if (isupper(s[i])) {
    			ans.push_back((char) s[i] + 32);
    		} else {
    			ans.push_back(s[i]);
    		}
    	}
    } 

    cout << ans;

    return 0;
}