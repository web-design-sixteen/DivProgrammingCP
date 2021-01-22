#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
const ll MOD=1e9+7,N=2e5+5;
map<string, ll>ma;
string ar[4]={"utara","timur","selatan","barat"};
void solve(){
    ll n;
    string s;
    cin>>s>>n;
    ll cr=ma[s];
    cout<<ar[(cr+n)%4];
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin>>t;
    ma["utara"]=0;
    ma["barat"]=3;
    ma["selatan"]=2;
    ma["timur"]=1;
    forn(i,1,t){
        solve();
        if(i<t) cout<<endl;
    }

}
