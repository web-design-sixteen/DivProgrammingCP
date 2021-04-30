#include <bits/stdc++.h>
using namespace std;
int main(){
	string S;
	cin>>S;
	int len=S.length();
	for(int i=0; i<len; i++){
		if(S[i]>=97 && S[i]<=122) {
			S[i]-=32;
		} else if(S[i]>=65 && S[i]<=90){
			S[i]+=32;
		}
	}
	cout<<S<<endl;
}
