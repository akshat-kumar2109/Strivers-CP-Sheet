#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int n;
    cin >> n;
    long long int hash[10];
    memset(hash, 0, sizeof(hash));

    while (n > 0) {
    	hash[n % 10]++;
    	n /= 10;
    }

    if ((hash[4] + hash[7]) == 7 || 
    	(hash[4] + hash[7]) == 4) {
    	cout << "YES";
    } else {
    	cout << "NO";
    }

    return 0;
}