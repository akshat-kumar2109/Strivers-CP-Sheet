#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int mat[5][5];

    int r, c;
    for (int i = 0; i < 5; i++) {
    	for (int j = 0; j < 5; j++) {
    		cin >> mat[i][j];
    		if (mat[i][j] == 1) {
    			r = i;
    			c = j;
    		}
    	}
    }

    int ans = abs(r - 2) + abs(c - 2);

    cout << ans << endl;

    return 0;
}