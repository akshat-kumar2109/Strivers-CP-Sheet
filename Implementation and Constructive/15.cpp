#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int k, n, w;
    cin >>k >>n >> w;

    int total_cost = ((w * (w + 1)) / 2) * k;

    int ans = (total_cost - n) < 0 ? 0 : total_cost - n;

    cout << ans;

    return 0;
}