#include <bits/stdc++.h>
using namespace std;

int pow(int num, int exp) {
	int ans = 1;

	while (exp-- > 0) {
		ans *= num;
	}

	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>> t;

    while (t--) {
    	int n;
	    cin>>n;

	    int i = 0;
	    vector<int> res;
	    while (n > 0) {
	    	int ans = (n % 10) * pow(10, i);
	    	i++;
	    	n /= 10;
	    	if (ans == 0) continue;
	    	res.push_back(ans);
	    }

	    cout << res.size() << endl;
	    for (auto ele : res) {
	    	cout << ele << " ";
	    } cout <<endl;
    }
	
	return 0;
}