#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    int curr = 0;
    int max = -1;
    while (n--) {
    	int a, b;
    	cin >> a >> b;

    	curr += (b - a);
    	if (curr > max) {
    		max = curr;
    	}
    }

    cout << max;

    return 0;
}