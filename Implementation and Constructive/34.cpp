#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>> n;

    /* 

		for n = 3
		-3 -2 -1 0 1 2 3 -> loop
		 6  4  2 0 2 4 6  -> spaces
		 0  1  2 3 2 1 0  -> numbers

    */

    for (int row = -n; row <= n; row++) {
    	int spaces = 2 * abs(row);
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }

        int max = n - abs(row);
        for (int i = 0; i < max; i++) {
            cout << i << " ";
        }
        for (int i = max; i > 0; i--) {
            cout << i << " ";
        }
        cout << 0 << endl;
    }

    return 0;
}