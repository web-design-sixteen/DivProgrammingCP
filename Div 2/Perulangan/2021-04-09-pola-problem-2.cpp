#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++){
			if(n % 2 == 1){
				if(i == n/2+1) cout << "*";
				else cout <<"#";
			}
			else{
				if(i == n/2 || i == n/2+1) cout << "*";
				else cout << "#";
			}
		}
		cout << endl;
	}
}
