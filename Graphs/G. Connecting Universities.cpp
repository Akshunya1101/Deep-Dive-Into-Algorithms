#include<bits/stdc++.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r" , stdin);

	#endif

	int n, k;
	cin >> n >> k;
	std::vector< vector<int> > v(n+1);
	vector <int> u;
	int a,b;
	for (int i = 0; i < k; ++i)
	{
		cin >> a >> b;
		u.push_back(a);
		u.push_back(b);
	}
	for (int i = 0; i < n-1; ++i)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int dist = 0;        // Main Algorithm
	while(!u.empty()) {
		int univ = u[0];
		u.erase(u.begin());
		std::vector< int > level(n+1);
		queue <int> q;
		vector <bool> visited(n+1, false);
		q.push(univ);
		level[univ] = 0;
		while(!q.empty()) {   // bfs
			int node = q.front();
			q.pop();
			for( int nbr : v[node]) {
				if (!visited[nbr])
				{
					level[nbr] = level[node]+1;;
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}
		int max=0;
		std::vector<int>::iterator ptr;
		for (std::vector<int>::iterator i = u.begin(); i != u.end(); ++i)
		{
			if (max < level[*i])
			{
				max = level[*i];
				ptr = i;
			}
		}
		dist += max;
		u.erase(ptr);

	}
	cout << dist << endl;

	return 0;
}
