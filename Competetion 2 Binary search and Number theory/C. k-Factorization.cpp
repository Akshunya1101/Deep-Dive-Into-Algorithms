#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n, k;
	cin >> n >> k;
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
	vector<int> factors;
	for (int i = 0; i < primes.size(); ++i) {
		if(factors.size() == k-1 && n!=1) {
			factors.push_back(n);
			for (int l = 0; l < k; ++l)
				cout << factors[l] << " " ;
			return 0;
		}

		if(n%primes[i]==0) {
			factors.push_back(primes[i]);
			n = n/primes[i];
			--i;
		}
	}
	cout << -1;

	return 0;
}