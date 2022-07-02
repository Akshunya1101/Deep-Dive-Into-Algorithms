#include <bits/stdc++.h>

using namespace std;
int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	#endif

	int n;
	cin >> n;
	map <int, int> M;
	int a;

	for(int i=0; i<n; i++) {
		cin >> a;
		M[a]++;
	}
	int mx=0;
	for(auto it:M)
		mx = max(mx,it.second);
	cout << mx;

	return 0;
}