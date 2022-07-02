#include<bits/stdc++.h>

using namespace std;

int GCD( int a, int b);

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n, m;
	cin >> n;
	while(n--) {
		cin >> m;
		if(m%2==0)
			cout << m/2 << " " << m/2 << "\n";
		else {
			vector <bool> is_prime(m+1, true);
			vector <int> primes;
			int a=1, b = m-1;
			is_prime[0] = is_prime[1] = false;
			for (int i = 2; i < m; ++i) {
				if(is_prime[i])
					primes.push_back(i);
				if(m % i==0) {
						a = m / i;
						b = m - a;
					}
				for(int j=0; j< primes.size() && i*primes[j] < m; j++) {
					is_prime[i*primes[j]] = false;
					if(i % primes[j]==0)
						break;
				}
			}

			cout << a << " " << b << "\n";
		}
	}

	return 0;
}

