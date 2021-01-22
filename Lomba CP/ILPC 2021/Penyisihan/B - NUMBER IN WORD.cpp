#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mod 1000000007
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define DOR(i,a,b) for(int i=b;i>=a;i--)    
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
		vector <string> v;
    FOR(i,1,t){
    	string s;
		cin >> s;
		v.clear();
		int awal = 0;
		FOR(i,0,s.length()-1){
			if(s[i] == '1')  v.pb("one");
			else if(s[i] == '2')  v.pb("two");
			else if(s[i] == '3')  v.pb("three");
			else if(s[i] == '4')  v.pb("four");
			else if(s[i] == '5')  v.pb("five");
			else if(s[i] == '6')  v.pb("six");
			else if(s[i] == '7')  v.pb("seven");
			else if(s[i] == '8')  v.pb("eight");
			else if(s[i] == '9')  v.pb("nine");
			else if(s[i] == '0'){
				if(awal == s.length()-1) v.pb("zero");
				else if(awal < s.length()-1 && s[awal] == '0'){
					awal++;
					continue;
				}	
				else v.pb("zero");
			} 	
		}
		FOR(i,0,v.size()-1){
				if(i < v.size()-1)cout << v[i] << " ";
				else cout << v[i];
			}
			if(i<t) cout<<endl;
		
	}
}
