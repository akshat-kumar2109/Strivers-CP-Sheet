#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
	int m,n;
	cin>>m>>n;

	int grid[m][n];
	int res[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin>>grid[i][j];
			res[i][j] = 1;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 0) {
				for (int k = 0; k < n; k++)
					res[i][k] = 0;
				for (int k = 0; k < m; k++)
					res[k][j] = 0;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1) {
				int sum = 0;
				for (int k = 0; k < n; k++)
					sum += res[i][k];
				for (int k = 0; k < m; k++)
					sum += res[k][j];
				if (sum == 0) {
					cout << "NO";
					return;
				}
			}
		}
	}

	cout << "YES" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	// cin>>t;

	while (t--) {
		solve();
	}

}