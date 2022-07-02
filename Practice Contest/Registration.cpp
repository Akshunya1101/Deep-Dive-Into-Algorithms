#include <bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	#endif

	int n;
	string str;
	cin >> n;
	std::map<string, int> M;

	while(n--) {
		getline(cin, str);
		M[str]++;
		if(M[str]==1)
			cout << "OK\n";
		else
			cout << str << M[str]-1 << "\n" ;
	}
	
	return 0;
}