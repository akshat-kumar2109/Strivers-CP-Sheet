#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    int i = s.size();
    while (i--) {
    	int last = s[i] - '0';
    	int num = 9 - last;

    	if (num < last) {
    		s[i] = num + '0';
    	}

    	if (i == 0 && num == 0) {
    		s[i] = last + '0';
    	}
    }

    cout << s;

    return 0;
}