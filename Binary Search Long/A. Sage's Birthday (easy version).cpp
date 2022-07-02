#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r" , stdin);

	#endif

	int n;
	cin >> n;
	std::vector<int> v;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());

	cout << (n-1)/2 << "\n";

	for (int i = 0; i < n; ++i) {
		if(i == n-1 && i%2 == 0)
			cout << v[i];
		else if(i%2 == 0)
			cout << v[i+1] << " ";
		else
			cout << v[i-1] << " ";

	}

	return 0;
}