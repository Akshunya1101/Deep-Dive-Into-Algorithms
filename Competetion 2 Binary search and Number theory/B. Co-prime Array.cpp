#include<bits/stdc++.h>

using namespace std;

int are_coprime(int a, int b) {
	int t;
	if(b>a) {
		t=b;
		b=a;
		a=t;
	}
	int s1=1,t1=0,r1=a,s2=0,t2=1,r2=b; // var with subscript 2 are current ones 
	int q;                          //q is quotient
	while(r2 != 0) {
		q = r1/r2;
		t=r2;
		r2 = r1%r2;
		r1 = t;

		t=s2;
		s2 = s1 - s2*q;
		s1 = t;

		t=t2;
		t2 = t1 - t2*q;
		t1 = t;
	}
	if (r1==1)
		return 1;
	else
		return 0;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	vector<int> v;
	int a;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		v.push_back(a);
	}
	int k=0;
	for (int i = 0; i < n+k; ++i) {
		if (i==n+k-1)
		{
			continue;
		}
		if (! are_coprime(v[i], v[i+1]) ) {
			v.insert(v.begin()+i+1 ,1);
			i++;
			k++;
		}
	}

	cout << k << "\n";
	for (int i = 0; i < n+k; ++i)
	{
		cout << v[i] << " ";
	}

	return 0;
}