#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    unordered_map<string, int> mp;
    mp["Icosahedron"] = 20;
    mp["Dodecahedron"] = 12;
    mp["Octahedron"] = 8;
    mp["Cube"] = 6;
    mp["Tetrahedron"] = 4;

    int n;
    cin>>n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
    	string s;
    	cin>>s;

    	ans += mp[s];
    }

    cout << ans;

    return 0;
}