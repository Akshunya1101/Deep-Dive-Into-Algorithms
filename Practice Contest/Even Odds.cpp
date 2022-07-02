#include <bits/stdc++.h>

using namespace std;

int main() {

   #ifndef ONLINE_JUDGE 

   freopen("Even Odds input.txt", "r", stdin); 

   #endif

   long long int n,k;
   cin >> n >> k;
   if(k <= (n + n%2)/2 )
   	cout << 2*k - 1;
   else
   	cout << 2*(k - (n+1)/2);
	
	return 0;
}