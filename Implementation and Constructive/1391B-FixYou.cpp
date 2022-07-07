#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;

    while (t--) {
		int n,m;
    	cin>>n>>m;

		vector<vector<char>> grid;
    	for (int i = 0; i < n; i++) {
    		vector<char> row;
    		for (int j = 0; j < m; j++) {
    			char temp;
    			cin>>temp;
    			row.push_back(temp);
    		}
    		grid.push_back(row);
    	}

    	int ans = 0;
    	for (int i = 0; i < n; i++) {
    		for (int j = 0; j < m; j++) {
    			if (j == m - 1 && grid[i][j] == 'R') {
    				ans++;
    			}
    			if (i == n - 1 && grid[i][j] == 'D') {
    				ans++;
    			}
    		}
    	}

    	cout << ans << endl;

    }

    return 0;
}