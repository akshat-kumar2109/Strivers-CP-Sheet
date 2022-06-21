#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k>>l>>c>>d>>p>>nl>>np;

    int dpt = (l * k) / nl;
    int lpt = (c * d);
    int spt = p / np;

    cout << min({dpt, lpt, spt}) / n;

    return 0;
}