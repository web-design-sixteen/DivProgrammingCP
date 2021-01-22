#include <bits/stdc++.h>

using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
		long long a;
		cin>>a;
		if((long long)sqrt(1LL+(8LL*a))*sqrt(1LL+(8LL*a))==1LL+(8LL*a)) {
			cout<<"YA";
		}
		else cout<<"TIDAK";
		if(i<t) cout<<endl;
	}
	return 0;
}
