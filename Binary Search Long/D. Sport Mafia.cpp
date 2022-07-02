#include<bits/stdc++.h>
 
using namespace std;
int main() {
 
	#ifndef ONLINE_JUDGE
 
	freopen("input.txt", "r" , stdin);
 
	#endif
 
	int n, k;
	cin >> n >> k;
	 int hi = n;
	 int lo = 1;
	 int mid = (hi + lo)/2;
 
	 while(lo < hi) {
	 	mid = lo + (hi - lo)/2;
	 	if(mid*(mid+3)/2 - n == k)
	 		break;
	 	else if(mid*(mid+3)/2 - n > k)
	 		hi = mid;
	 	else
	 		lo = mid;
	 }
 
	 cout << n - mid;
 
	return 0;
}
