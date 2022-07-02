#include <bits/stdc++.h>

#define all(v) v.begin, v.end

using namespace std;

int main() {

   #ifndef ONLINE_JUDGE 

   freopen("CopyCopyCopyCopyCopy.txt", "r", stdin); 

   #endif

   int m, n, a;
   vector <int> v;
   cin >> m;
   while(m--) {
   	cin >> n;
      v.clear();

   	while(n--) {
   		cin >> a;
   		v.push_back(a);
   	}
   	set< int > s(v.begin(), v.end());
   	vector <int> v2(s.begin(), s.end());
   	cout << v2.size() << "\n" ;
   }
	
	return 0;
}