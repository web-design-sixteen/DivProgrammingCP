#include <bits/stdc++.h>
using namespace std;

// 6 / 2 = 3
// 10 / 2 = 5
// 22 / 2 = 11 

// 32 / 2 = 16
// 16 / 2 = 8
// 8 / 2 = 4
// 4 /2 = 2
// 2 / 2 = 1

int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << "ya" << endl;
	}
	else{
		while(n != 1){	// selama n belum menjadi 1, lakukan :
			if(n % 2 == 1){	//jika n itu ganjil, maka keluarkan bukan dan hentikan
				cout << "bukan" << endl;
				break;
			}
			else{	//jika n itu genap, maka bagi terus n dengan 2 sampai hasilnya 1. Jika sampai 1, keluarkan iya.
				n = n / 2;
				if(n == 1){
					cout << "ya" << endl;
				}
			}
		}
		
	}

}
