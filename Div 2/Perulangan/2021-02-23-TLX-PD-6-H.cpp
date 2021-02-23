#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		// jika bilangan sudah ada di akhir baris
		if(i == n){
			if(i % k == 0){
				cout << "*" << endl;
			}
			else{
				cout << i << endl;
			}
		}
		// jika bilangan masih belum di akhir (1 .. n-1)
		else{
			if(i % k == 0){
				cout << "* ";
			}
			else{
				cout << i << " ";
			}
		}
	}
}
