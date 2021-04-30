#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,ada[100005]={0};
	cin >> n;
	FOR(i,1,n-2){
		cin >> a;
		ada[a] = 1;
	} 
	// FOR(i,1,n-2) cout << i << " " << ada[i] << endl;
	FOR(i,1,n){
		if(ada[i]==0) cout << i << endl;
	}

}


