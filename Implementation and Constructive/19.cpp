#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin>>s;

    if (s.size() == 1) {
    	cout << s;
		return 0;
    }

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (char ch : s) {
    	if (ch - '0' == 1) cnt1++;
    	if (ch - '0' == 2) cnt2++;
    	if (ch - '0' == 3) cnt3++;
    }

    string res = "";
    while (cnt1--) {
    	res += "1+";
    }
    while (cnt2--) {
    	res += "2+";
    }
    while (cnt3--) {
    	res += "3+";
    }

    res = res.substr(0, res.size() - 1);

    cout << res;

    return 0;
}