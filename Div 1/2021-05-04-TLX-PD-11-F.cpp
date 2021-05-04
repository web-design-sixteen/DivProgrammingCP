#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0; i<len; i++){
		if(s[i]=='_'){
			s.erase(i,1);
			len--;
			s[i]-=32;
		} else if(s[i]>=65 && s[i]<=90){
			s[i]+=32;
			s.insert(i,"_");
			len++;
			i++;
		}
	}
	cout<<s<<endl;
}
