#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin>>s;

    unordered_set<char> set;

    for (auto ch : s) {
    	set.insert(ch);
    }

    if (set.size() % 2 == 0) {
    	cout << "CHAT WITH HER!";
    } else {
    	cout << "IGNORE HIM!";
    }

    return 0;
}