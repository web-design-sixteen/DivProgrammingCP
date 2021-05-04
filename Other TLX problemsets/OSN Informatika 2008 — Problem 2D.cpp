#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,suku=1,beda=2;
	cin >> n;
	for(int i=1;i<=n;i++){
		cout << suku << endl;
		suku = suku + beda;
		beda++;
	}
}


