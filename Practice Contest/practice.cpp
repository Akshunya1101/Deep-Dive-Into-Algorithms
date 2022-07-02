#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main() {
	
	vector < int > v(20);
 for (int i = 0; i < 20; i++) {
   v[i] = i + 1;
 }
 v.resize(25);
 for (int i = 20; i < 25; i++) {
   v.push_back(i * 2) ; // Writes to elements with indices [25…30), not [20…25) ! <
 }
int elements_count = v.size();
cout << elements_count  << "\n" << v[27] ;
	return 0;
}