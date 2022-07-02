#include <bits/stdc++.h>

using namespace std;

int main() {

   #ifndef ONLINE_JUDGE 

   freopen("VnS input.txt", "r", stdin); 

   #endif

	int n,m;
	cin >> n >> m;
	int i=0;

	while(n) {
		i++;
		if(i%m == 0)
			n++;
		n--;
	}

	cout << i;

	return 0;
}