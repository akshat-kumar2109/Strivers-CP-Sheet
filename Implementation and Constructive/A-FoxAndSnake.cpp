#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    char arr[n][m];

    int k = 1;
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		if (i % 2 == 0) {
    			arr[i][j] = '#';
    		} else {
    			arr[i][j] = '.';
    			if (k % 4 == 0 && j == 0) {
    				arr[i][j] = '#';
    			}
    			if (k % 4 != 0 && j == m - 1) {
    				arr[i][j] = '#';
    			}
    		}
    	}
    	k++;
    }

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		cout << arr[i][j];
    	} cout << endl;
    }

    return 0;
}