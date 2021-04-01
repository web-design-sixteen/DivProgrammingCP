#include <bits/stdc++.h>
using namespace std;
int d;
int hitung(int i,int j){
	int c=abs(i-j),e=c;
	for(int a=1; a<=d; a++){
		c*=e;
	}
	return c;
}
int main(){
	int n,x[1001],y[1001];
	cin>>n>>d;
	for(int i=1; i<=n; i++){
		cin>>x[i]>>y[i];
	}
	int ma=-10000000,mi=10000000;
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			int cnt=hitung(x[i],x[j])+hitung(y[i],y[j]);
			ma=max(ma,cnt);
			mi=min(mi,cnt);
		}
	}
	cout<<mi<<" "<<ma<<endl;
	return 0;
}
