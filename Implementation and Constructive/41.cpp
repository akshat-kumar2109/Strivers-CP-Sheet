#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,x,y;
	cin>>n>>x>>y;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}

	int mid = 0;
	while (mid < n) {
		int l = mid - 1;
		int r = mid + 1;

		int min = arr[mid];
		bool currMin = true;

		while (l >= 0 && mid - l <= x) {
			if (arr[l] < min) {
				currMin = false;
				break;
			}
			l--;
		}

		if (!currMin) {
			mid++;
			continue;
		}

		while (r < n && r - mid <= y) {
			if (arr[r] < min) {
				currMin = false;
				break;
			}
			r++;
		}

		if (currMin) {
			cout << mid + 1 << endl;
			break;
		}
		
		mid++;
	}
	
	return 0;
}