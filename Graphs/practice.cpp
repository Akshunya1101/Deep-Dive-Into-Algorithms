#include<bits/stdc++.h>
 
using namespace std;

int main() {
 
	#ifndef ONLINE_JUDGE
 
	freopen("input.txt", "r" , stdin);
 
	#endif
 
	int n, m;
	cin >> n >> m;
	int a,b;
	vector <vector <int> > friends(n+1);

	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b;
		friends[a].push_back(b);
		friends[b].push_back(a);
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j : friends[i])
		{
			if (j>i)
			{
				for(int k : friends[j])
				{
					if ( std::find(friends[i].begin(), friends[i].end(), k) == friends[i].end() && i != k )
					{
						cout << "NO";
						return 0;
					}
				}
			}
		}
	}
	cout << "YES";
 
	return 0;
}







#include<bits/stdc++.h>

using namespace std;

void bfs(int n, std::vector<vector <int> > &v(n+1) , std::vector< int > &level(n+1), int src ) {
	vector <bool> visited(n+1, false);
	queue <int> q;
	q.push(src);
	visited[src] = true;
	int node, curr_lev=0;

	while(!q.empty()) {
		node = q.front();
		q.pop();
		level(node) = curr_lev++;

		for( int nbr : v[node]) {
			if(!visited[nbr]) {
				q.push(nbr);
				visited[nbr] = true;
			}
		}
	}
}


int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r" , stdin);

	#endif

	int n, x;
	cin >> n >> x;
	std::vector< vector<int> > v(n+1);
	int a,b;
	for (int i = 0; i < n-1; ++i)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	std::vector<int> levelA(n+1);
	std::vector<int> levelB(n+1);
	bfs(n, v, levelA, 1 );
	bfs(n, v, levelB, x );

	return 0;
}




#include<bits/stdc++.h>

using namespace std;

void bfs(int n, int src, vector< int > &level(n+1), vector<vector <int> > &v(n+1)  ) {
	vector <bool> visited(n+1, false);
	queue <int> q;
	q.push(src);
	visited[src] = true;
	int node, curr_lev=0;

	while(!q.empty()) {
		node = q.front();
		q.pop();
		level(node) = curr_lev++;

		for( int nbr : v[node]) {
			if(!visited[nbr]) {
				q.push(nbr);
				visited[nbr] = true;
			}
		}
	}
}


int main() {

	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r" , stdin);

	#endif

	int n, x;
	cin >> n >> x;
	std::vector< vector<int> > v(n+1);
	int a,b;
	for (int i = 0; i < n-1; ++i)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	std::vector<int> levelA(n+1);
	std::vector<int> levelB(n+1);
	bfs(n, 1, levelA, v );
	bfs(n, x, levelB, v );

	return 0;
}