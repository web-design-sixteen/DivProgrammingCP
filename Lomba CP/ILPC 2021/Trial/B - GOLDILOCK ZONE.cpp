#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
const ll N=1e6+5,MOD=1e9+7;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int a,b,ma=-1,mi=INT_MAX,n;
		cin>>n;
		forn(i,1,n){
			cin>>a>>b;
			ma=max(ma,a);
			mi=min(mi,b);
		}
		if(ma>mi) cout<<"-1\n";
		else cout<<ma<<" "<<mi<<endl;
	}
}
