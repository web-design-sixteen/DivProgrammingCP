#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string S;
		cin>>S;
		int len=S.length();
		for(int i=0; i<len; i++){
			if(i%2==0){
				S[i]-=32;
			}
		}
		cout<<S<<endl;
	}
}
