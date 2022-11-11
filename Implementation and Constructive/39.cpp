#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin>>s;

	if (islower(s[0])) {
		bool upper = true;
		for (int i = 1; i < s.size(); i++) {
			if (!isupper(s[i])) {
				upper = false;
				break;
			}
		}
		if (upper) {
			string res;
			res = toupper(s[0]+'\0');
			res += s.substr(1, s.size() - 1);
			transform(res.begin()+1, res.end(), res.begin()+1, ::tolower);
			cout << res << endl;
			return 0;
		}
	}	

	bool allUpper = true;
	for (int i = 0; i < s.size(); i++) {
		if (!isupper(s[i])) {
			allUpper = false;
			break;
		}
	}
	if (allUpper) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s << endl;
		return 0;
	}
	
	cout << s << endl;

	return 0;
}