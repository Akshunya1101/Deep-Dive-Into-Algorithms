#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r" , stdin);

	#endif

	int n,t;
	cin >> n >> t;
	std::vector<std::vector<int> > v(n+1);
	int a;
	for (int i = 1; i < n; ++i)
	{
		cin >> a;
		v[i].push_back(i+a);
	}

	vector<bool> visited(n+1, false);
	queue <int>q;
	q.push(1);
	int node;
	visited[1] = true;
	while(!q.empty()) {
		node = q.front();
		q.pop();
		for( int nbr : v[node]) {
			if (nbr == t)
			{
				cout << "YES" ;
				return 0;
			}
			if (!visited[nbr])
			{
				q.push(nbr);
				visited[nbr] = true;
			}
		}

	}
	cout << "NO" ;

	return 0;
}