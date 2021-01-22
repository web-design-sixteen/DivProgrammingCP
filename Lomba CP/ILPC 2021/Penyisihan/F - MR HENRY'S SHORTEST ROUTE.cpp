#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
const ll MOD=1e9+7,N=2e5+5;
ll x,y;
void solve(){
	ll a[199][199],vis[199][199],dist[199][199];
	cin>>x>>y;
	forn(i,1,x) {
		forn(j,1,y) cin>>a[i][j];
	}
	dist[1][1]=a[1][1];
	forn(i,2,x) dist[i][1]=dist[i-1][1]+a[i][1];
	forn(i,2,y) dist[1][i]=dist[1][i-1]+a[1][i];
	forn(i,2,x){
		forn(j,2,y){
			dist[i][j]=min(dist[i-1][j],dist[i][j-1])+a[i][j];
		}
	}
	cout<<dist[x][y];
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
}
