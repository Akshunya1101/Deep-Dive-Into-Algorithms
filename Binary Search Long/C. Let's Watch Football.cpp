#include<bits/stdc++.h>

using namespace std;

int min_wait(int a, int b, int c) {

	int hi = c*a/b;
	int lo = 0;
	int k = (a-b)*c;
	int mid;
	while(lo < hi) {
		mid = lo + (hi - lo)/2;
		if(b*mid == k)
			return mid;
		else if(b*mid > k)
			hi = mid;
		else
			lo = mid+1;
	}
	return lo;
}

int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r" , stdin);

	#endif

	int a,b,c;
	cin >> a >> b >> c;

	cout << min_wait(a, b, c);

	return 0;
}