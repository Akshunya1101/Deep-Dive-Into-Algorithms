#include<bits/stdc++.h>

using namespace std;

int GCD( int a, int b);

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
	int s = primes.size();
	int count = 0;
	for (int i = 0; i < s; ++i) {
			for (int j = 0; primes[j] < primes[i]/2; ++j) {
				if(primes[j]+primes[j+1]+1 == primes[i]) {
					count++;
					break;
				}
			}
			if(count >= k) {
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";	

	return 0;
}