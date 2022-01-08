#include <bits/stdc++.h>
using namespace std;
int main(){
  /* PENJELASAN CONTOH MASUKAN
    2
    4 5
    3
    12 13 15

    4 12 -> 12/4=3
    4 13 -> 13/4=3.25
    4 15 -> 15/4=3.75
    5 12 -> 12/5=2.4
    5 13 -> 13/5=2.6
    5 15 -> 15/5=3
  */
	int n;
	cin>>n;
	int a[51]; //sediakan array yg ukurannya > 50
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[51];
	for(int i=1; i<=m; i++){
		cin>>b[i];
	}
	/*ide : 
		- cek semua kemungkinan kombinasi gerigi yang ada
		- simpan rasio terbesar yg dicapai sekarang
		- cek apakah masih ada yang lebih besar
		- sambil ngitung ada brp yg rasionya terbesar
	*/
	int rasio=-99999, terbesar=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			// rasio : b[j]/a[i]
			// kalau ngga bulat gimana?
			if(rasio<b[j]/a[i] && b[j]%a[i]==0){
				terbesar=1;
				rasio=b[j]/a[i];
			} else if(rasio==b[j]/a[i] && b[j]%a[i]==0){
				terbesar++;
			}
		}
	}
	cout<<terbesar<<"\n";
}
