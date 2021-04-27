#include <bits/stdc++.h>
using namespace std;
int main(){
	string S;
	int K;

	cin>>S;
	cin>>K;

	int len = S.length();
	for(int i=0; i<len; i++){
		if(S[i]+K<=122){
			S[i]+=K;
		} else {
			S[i]=S[i]+K-26;
		}
	}

	cout<<S<<endl;
}
