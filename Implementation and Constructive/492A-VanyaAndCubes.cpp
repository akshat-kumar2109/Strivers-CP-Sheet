#include <bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    int i = 1;
    int sum = 0;
    int total = 0;
    while (1) {
    	sum += i;
    	total += sum;
    	if (total > n) break;
    	i++;
    }

    cout << i - 1;

    return 0;
}