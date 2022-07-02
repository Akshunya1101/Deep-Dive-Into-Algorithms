#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n, k, m;
	cin >> n >> k >> m;
	std::vector<int> v;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < n; ++i) {
		std::vector<int> arr;
		arr.push_back(v[i]);
		for (int j = i+1; j < n; ++j) {
			if( (v[j] - v[i])%m == 0 ) {
				arr.push_back(v[j]);
				v.erase( v.begin()+j );
				n--;
			}
			if (arr.size() == k)
			{
				cout << "Yes\n";
				for (int l = 0; l < k; ++l)
				{
					cout << arr[l] << " ";
				}
				return 0;
			}
		}
		arr.clear();
	}
	cout << "No";

	return 0;
}