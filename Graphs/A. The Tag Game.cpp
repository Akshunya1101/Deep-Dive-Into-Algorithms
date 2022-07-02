#include<bits/stdc++.h>

using namespace std;

bool sortbysecdesc(const pair<int,int>&a, const pair<int,int>b ) {
	return a.second > b.second;
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
	std::vector< pair<int, int> > levelA(n+1);
	std::vector< int > levelB(n+1);

	vector <bool> visited(n+1, false);    //To find level of vertices about 1
	queue <int> q;
	q.push(1);
	visited[1] = true;
	int node, curr_lev=0;
	levelA[1] = make_pair(1, curr_lev);

	while(!q.empty()) {
		node = q.front();
		q.pop();
		++curr_lev;
		for( int nbr : v[node]) {
			if(!visited[nbr])
				levelA[nbr] = make_pair(nbr, levelA[node].second+1);
	}

		for( int nbr : v[node]) {
			if(!visited[nbr]) {
				q.push(nbr);
				visited[nbr] = true;
			}
		}
	}

	visited.assign(n+1, false);   //To find level of vertices about x
	q.push(x);
	visited[x] = true;
	curr_lev=0;
	levelB[x]=0;

	while(!q.empty()) {
		node = q.front();
		q.pop();
		++curr_lev;
		for( int nbr : v[node]) {
			if(!visited[nbr])
				levelB[nbr] = levelB[node]+1;
	}

		for( int nbr : v[node]) {
			if(!visited[nbr]) {
				q.push(nbr);
				visited[nbr] = true;
			}
		}
	}

	sort(levelA.begin(), levelA.end(), sortbysecdesc );   // sorting by 2nd element

	for(auto itr : levelA) {
		if(itr.second > levelB[itr.first]) {
			cout << 2*itr.second;
			return 0;
		}
	}

	return 0;
}
