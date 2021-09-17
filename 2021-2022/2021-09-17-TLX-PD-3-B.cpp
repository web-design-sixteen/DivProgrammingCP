// problem B - perulangan

#include <bits/stdc++.h>
using namespace std;

int main(){
	// clue : menggunakan variabel untuk menampung nilai sementara
	int n,a,hasil=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a;
		hasil = hasil + a;
	}
	cout << hasil << endl;

	/*
	i=1, cin >> 1, hasil = 0 + 1 = 1
	i=2, cin >> 2, hasil = 1 + 2 = 3
	i=3, cin >> 3, hasil = 3 + 3 = 6
	i=4, cin >> 4, hasil = 6 + 4 = 10
	i=5, cin >> 5, hasil = 10 + 5 = 15


	*/
}
