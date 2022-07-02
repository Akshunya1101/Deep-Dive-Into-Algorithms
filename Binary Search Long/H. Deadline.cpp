#include<bits/stdc++.h>

using namespace std;

int ceiling(int a, int b) {
	if(a%b == 0)
		return a/b;
	else
		return a/b + 1;
}

void possible(int n, int d) {
	if(n >= d) {
			cout << "YES\n";
			return;
		}
		int hi = n;
		int lo = 0;
		int mid =  (hi + lo)/2;
		while(lo < hi) {
			mid = lo + (hi - lo)/2;
			if(mid + ceiling(d, mid+1) <= n ) {
				cout << "YES\n";
				return;
			}
			else{
				lo = mid+1;
			}
		}
		cout << "NO\n";
		return;
}

int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r" , stdin);

	#endif

	int T;
	cin >> T;
	while(T--) {
		int n, d;
		cin >> n >> d;
		possible(n, d);
	}

	return 0;
}