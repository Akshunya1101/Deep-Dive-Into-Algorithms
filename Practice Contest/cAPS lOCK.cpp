#include <bits/stdc++.h>

using namespace std;

int check_capslock(string str) {
	int i = 1;
	while(str[i] != '\n') {
		if(str[i] >= 'a' && str[i] <= 'z')
			return 0;
		i++;
	}
	return 1;
}

int main() {

   #ifndef ONLINE_JUDGE 

   freopen("input.txt", "r", stdin); 

   freopen("error.txt", "w", stderr); 

   freopen("output.txt", "w", stdout); 

   #endif

	string str;
	getline(cin, str);
	if( check_capslock(str) ) {
		int i=1;
		if(str[0]>= 'a' && str[0]<= 'z') {
			str[0] = str[0] + 'A' - 'a';
		}
		else if(str[0]>= 'A' && str[0]<= 'Z') {
			str[0] = str[0] + 'a' - 'A';
		}

		while( str[i] != '\n') {
			if(str[i]>= 'A' && str[i]<= 'Z') {
				str[i] = str[i] + 'a' - 'A';
			}
			i++;
		}
	}

	cout << str;
	return 0;
}