#include <bits/stdc++.h>
using namespace std;
bool coklat[1001][3];
int main(){
	int n,m;
	cin>>n>>m;
	// ide: tandai aja yang ada coklatnya
	// sama tandai yang kena coklat
	for(int i=1; i<=m; i++){
		int a,b;
		cin>>a>>b;
		coklat[a][b]=true;
		//tetangga kanan
		if(b==1){
			coklat[a][2]=true;
		}
		//tetangga kiri
		if(b==2){
			coklat[a][1]=true;
		}
		//tetangga bawah
		if(a!=n){
			coklat[a+1][b]=true;
		}
		//tetangga atas
		if(a!=1){
			coklat[a-1][b]=true;
		}
	}
	int jawaban=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=2; j++){
			if(coklat[i][j]==false){
				jawaban++;
			}
		}
	}
	cout<<jawaban<<"\n";
}
