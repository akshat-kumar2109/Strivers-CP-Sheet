#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	string ip;
	cin>>ip;

	for (int i = 0; i < 5; i++) {
		string s;
		cin>>s;

		if (s[0] == ip[0] || s[1] == ip[1]) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

    return 0;
}