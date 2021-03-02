#include <bits/stdc++.h>
using namespace std;
int a,b,k,x;
int cnt(int K,int X){
	//k == 1 -> |ax+b|
	if(K==1) return abs(a*X+b);
	// k>1 
	// a=2,b=3,x=1,k=2 . cnt(3,1);
	// x = |2*1+3| = x=5
	// cnt(3-1,5) = cnt(2,5) = |2*5+3| = 13
	// cnt(2-1,13) = cnt(1,13) = |2*13+3| = 29
	else {
		int xx=abs(a*X+b);
		return cnt(K-1,xx);
	}
}
int main(){
	cin>>a>>b>>k>>x;
	cout<<cnt(k,x)<<endl;
}
