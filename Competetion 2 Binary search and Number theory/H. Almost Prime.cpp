#include<bits/stdc++.h>

using namespace std;

int GCD( int a, int b);

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;

	std::vector<int> primes;
	std::vector<bool> is_prime(n+1, true);

	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; ++i) {
		if(is_prime[i])
			primes.push_back(i);
		for (int j = 0; j < primes.size() && i*primes[j] < n; ++j)
		{
			is_prime[i*primes[j]] = false;
			if(i%primes[j] == 0)
				break;
		}
	}
	int s = primes.size();
	std::vector<int> almost_primes;
	for (int i = 1,k=0; i <= n; ++i) {
		k=0;
		for(int j=0;j < s; j++ ) {
			if(i%primes[j] == 0)
				k++;
		}
		if(k==2)
			almost_primes.push_back(i);
	}

	cout << almost_primes.size()+1;

	return 0;
}