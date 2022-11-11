#include <bits/stdc++.h>
#define int long long int
 
using namespace std;
 
void solve() {
	string p,h;
	cin>>p>>h;
 
	int i = 0, j = p.length() - 1;
	unordered_map<char, int> pMap;
	for (int i=0;i<p.length();i++)
		pMap[p[i]]++;
 
	while (j < h.length()) {
		unordered_map<char, int> hMap;
		for (int k=i;k<=j;k++)
			hMap[h[k]]++;
 
		if (pMap == hMap) {
			cout << "YES" << endl;
			return;
		}
		i++; j++;
	}
 
	cout << "NO" << endl;
}
 
int32_t main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int t;
	cin>>t;
 
	while (t--)
		solve();	
 
 
	
	return 0;
}