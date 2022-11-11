#include <bits/stdc++.h>
#define int long long int
 
using namespace std;
 
void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
 
	int i = 0, j = n - 1;
	while (i < j) {
		if (s[i] + 1 == s[j] - 1 || s[i] + 1 == s[j] + 1) {
			i++; j--;
		} else if (s[i] - 1 == s[j] - 1 || s[i] - 1 == s[j] + 1) {
			i++; j--;
		} else {
			cout << "NO" << endl;
			return;
		}
	}
 
	cout << "YES" << endl;
}
 
int32_t main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int t;
	cin>>t;
 
	while (t--) {
		solve();
	}
	
	return 0;
}