#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int x=0,y=0,len=s.length();
	for(int i=0; i<len; i++){
		if(s[i]=='R'){
			x++;
		} else (s[i]=='L') {
			x--;
		} else (s[i]=='U'){
			y++;
		} else (s[i]=='D'){
			y--;
		}
	}
	cout<<x<<" "<<y<<"\n";
}
