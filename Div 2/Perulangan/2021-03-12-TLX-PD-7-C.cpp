#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,count=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << count;
			count += 1;
			if(count>9) count =0;
		}
		
		cout << endl;
	}
	
} 
