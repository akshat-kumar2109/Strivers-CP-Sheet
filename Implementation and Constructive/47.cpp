#include <bits/stdc++.h>
// #define int long long int
 
using namespace std;
 
int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int h1, m1;
	scanf("%d:%d", &h1, &m1);
	int h2, m2;
	scanf("%d:%d", &h2, &m2);
	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;
	int t3 = (t1 + t2) / 2;
	printf("%02d:%02d\n", t3 / 60, t3 % 60);
 
	return 0;
}