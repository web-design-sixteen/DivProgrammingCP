#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
		nested loop : for bersarang
		ada for didalam for 
	*/
	// for biasa
	for(int i=1; i<=10; i++){

	}
	//for bersarang -> tumpukannya bisa tak berhingga
	// tergantung sama kebutuhan
	for(int i=1; i<=10; i++){
		for(int i=1; i<=10; i++){
			for(int i=1; i<=10; i++){
				for(int i=1; i<=10; i++){

				}
			}
		}
	}
	// contoh:
	/*
		* * * * * * * * * * * *
		* * * * * * * * * * * *
		* * * * * * * * * * * *
		* * * * * * * * * * * *

		ukurannya : 4x12

		berarti : kita harus mencetak baris demi baris
	*/
	for(int baris=1; baris<=4; baris++){
		for(int kolom=1; kolom<=12; kolom++){
			if(kolom<12){
				cout<<"* ";
			} else {
				cout<<"*";
			}
		}
		cout<<endl;
	}

	//contoh:
	/*
		* 		-> 1
		**		-> 2
		*** 	-> 3
		****	-> 4
		*****	-> 5
	*/
	//berarti setiap baris nya, kita mengeluarkan bintang sebanyak nomor baris itu
	// baris ke-n, ada n bintang
	// baris ke 3, ada 3 bintang
	// baris ke 100, ada 100 bintang
	// dst
	int n;
	cin>>n;
	for(int baris=1 /*awal*/; baris<=n /*akhir*/; baris++){
		for(int kolom=1; kolom<=baris; kolom++){
			cout<<"*";
		}
		cout<<endl;
	}
}
