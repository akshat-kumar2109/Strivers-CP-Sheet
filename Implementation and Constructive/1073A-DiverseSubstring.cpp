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

	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i-1]) {
			cout << "YES" << endl;
			cout << s.substr(i-1, 2) << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	
	return 0;
}