#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int x = 0;

    while (n--) {
    	string s;
    	cin >> s;

    	if (s[0] == '+' && s[1] == '+' && s[2] == 'X') {
    		x++;
    	} else if (s[0] == 'X' && s[1] == '+' && s[2] == '+') {
    		x++;
    	} else if (s[0] == '-' && s[1] == '-' && s[2] == 'X') {
    		x--;
    	} else {
    		x--;
    	}
    }

    cout << x << endl;

    return 0;
}