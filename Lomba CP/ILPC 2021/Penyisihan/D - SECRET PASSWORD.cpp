#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	cin>>s;
	string a="";
	ll b;
	if(s[0]>='a'&&s[0]<='z') a+=(s[0]-32),b=s[0]-'a';
	else a+=s[0],b=s[0]-'A';
	ll len=s.length();
	forn(i,1,len-1){
		if(s[i]>='a'&&s[i]<='z') b=(b+(s[i]-'a')+1);
		else b=(b+(s[i]-'A')+1);
		a+=((char)(b%26+65));
	}
	cout<<a;
}
