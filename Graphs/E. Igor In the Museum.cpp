#include<bits/stdc++.h>
 
using namespace std;

int main() {
 
	#ifndef ONLINE_JUDGE
 
	freopen("input.txt", "r" , stdin);
 
	#endif
 
	int n, m,k ;
	cin >> n >> m >> k;
	int a,b;
	char ch;
	vector <vector <int> > adj( n*m );
	vector <vector <int> > empty( n+1 );
	for (int i = 1; i <= n; ++i)
	{
		empty[i].push_back(0);
		for (int j = 0; j < m; ++j)
		{
			cin >> ch;
			if (ch == '.')
			{
				empty[i].push_back(1);
			}
			else
				empty[i].push_back(0);
		}
	}

	for (int i = 2; i < n; ++i)
	{
		for (int j = 2; j < m; ++j)
		{
			if (empty[i][j])
			{
				if(empty[i][j+1])
					adj[n*i+j].push_back(n*i + j+1);
				if(empty[i][j-1])
					adj[n*i+j].push_back(n*i + j-1);
				if(empty[i+1][j])
					adj[n*i+j].push_back(n*(i+1) + j);
				if(empty[i-1][j])
					adj[n*i+j].push_back(n*(i-1) + j);
			}
		}
	}
	while(k--) {
		int I,J;
		cin >> I >> J;
		int node = I*n + J;
		int rooms=1;
		std::vector<bool> visited(n*m);
		queue <int> q;
		q.push(node);
		visited[node] = true;
		while(!q.empty()) {
			node = q.front();
			q.pop();
			for(int nbr : adj[node] ) {
				if (!visited[nbr])
				{
					visited[nbr]=true;
					q.push(nbr);
					++rooms;
				}
			}
		}
		cout << 2*rooms + 2 << endl;
	}

	return 0;
}