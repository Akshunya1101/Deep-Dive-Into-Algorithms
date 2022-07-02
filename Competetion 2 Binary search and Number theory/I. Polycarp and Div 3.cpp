#include<bits/stdc++.h>

using namespace std;

int Polycarp( std::vector<int> v );

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	vector <int> remainders;
	int d;
	while(n !=0) {
		d = n%10;
		remainders.push_back(d%3);
		n = n/10;
	}

	cout << Polycarp(remainders);

	return 0;
}

int Polycarp( std::vector<int> v ) {
	int count=0;
	int a=v[1], b=v[0], c, dig=v.size();
	if(v[0]==0)
		count++;
	if( (v[0]+v[1])%3 == 0 ) {
		v[0] = v[1] = 0;
		count++;
	}
	for (int i = 2; i < dig; ++i) {
		c = b;
		b = a;
		a = v[i];
		if( (a+b+c)%3==0 || (a+b)%3==0 || a==0 ) {
			a = b = c = 0;
			count ++;
		}
	}
	return count-1;
}