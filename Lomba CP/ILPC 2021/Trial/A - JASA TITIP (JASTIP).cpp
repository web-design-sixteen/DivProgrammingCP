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
		int a,b,cost=0;
		cin>>a>>b;
		forn(i,1,a){
			if(i%5==0) {
				b*=101;
				b/=100;
			}
			cost+=b;
		}
		cout<<cost<<endl;
	}
}
