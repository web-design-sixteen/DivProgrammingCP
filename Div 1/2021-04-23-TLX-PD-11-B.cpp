#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin >> s >> t;
	while(s.find(t) >=0 && s.find(t)<s.length()){
		s.erase(s.find(t), t.length());
	}
	cout << s << endl;
}
