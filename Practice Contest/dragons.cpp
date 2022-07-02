#include <bits/stdc++.h>

using namespace std;

int can_win(vector< pair<int, int> > dragon, int n, int s) {
	for(int i=0; i<n; i++) {
		if(s > dragon[i].first)
			s += dragon[i].second;
		else
			return 0;
	}
	return 1;
}

int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	#endif

	int n, s, i;
	cin >> s >> n;
	vector < pair< int, int > > dragon(n);

	for(i=0; i<n; i++) {
		cin >> dragon[i].first >> dragon[i].second ;
	}

	sort(dragon.begin(), dragon.end());

	if(can_win(dragon, n, s))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}