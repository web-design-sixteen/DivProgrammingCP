#include <bits/stdc++.h>
using namespace std;
int main(){
	//contoh, pola sebanyak 5 baris
	/*	
		    * 	-> 1 bintang , 4 spasi
		   **	-> 2 bintang , 3 spasi
		  *** 	-> 3 bintang , 2 spasi
		 ****	-> 4 bintang , 1 spasi
		*****	-> 5 bintang , 0 spasi
	*/
	// berarti setiap baris nya, kita mengeluarkan bintang sebanyak nomor baris itu dan mengeluarkan spasi sebanyak total baris di pola itu dikurangi nomor baris itu
	// kalau N=10
	// baris ke 10, ada 10 bintang, 10-10=0 spasi
	// baris ke 3, ada 3 bintang, 10-3=7 spasi
	// dst
	
	int n;
	cin>>n;
	for(int baris=1 /*awal*/; baris<=n /*akhir*/; baris++){
		for(int spasi=1; spasi<=n-baris; spasi++){
			cout<<" ";
		}
		for(int bintang=1; bintang<=baris; bintang++){
			cout<<"*";
		}
		cout<<endl;
	}

	//[CARA LAIN], pola sebanyak 5 baris
	/*	 54321 (anggaplah ini negatif)
		1    * 	-> 1 bintang , 4 spasi
		2   **	-> 2 bintang , 3 spasi
		3  *** 	-> 3 bintang , 2 spasi
		4 ****	-> 4 bintang , 1 spasi
		5*****	-> 5 bintang , 0 spasi
	*/
	// berarti setiap barisnya, kita mengeluarkan spasi dari -nomor baris sampai -nomor baris-1
	int n;
	cin>>n;
	for(int baris=1; baris<=n; baris++){
		for(int spasi=-n; spasi<=-baris-1; spasi++){
			cout<<" ";
		}
		for(int bintang=-baris; bintang<=-1; bintang++){
			cout<<"*";
		}
		cout<<endl;
	}
	//[CARA LAIN], pola sebanyak 5 baris
	/*	 12345 (anggaplah ini negatif)
		1    * 	-> 1 bintang , 4 spasi
		2   **	-> 2 bintang , 3 spasi
		3  *** 	-> 3 bintang , 2 spasi
		4 ****	-> 4 bintang , 1 spasi
		5*****	-> 5 bintang , 0 spasi
	*/
	// berarti setiap barisnya, kita mengeluarkan spasi dari -nomor baris sampai -nomor baris-1
	int n;
	cin>>n;
	for(int baris=1; baris<=n; baris++){
		for(int spasi=-1; spasi>=-n+baris; spasi--){
			cout<<" ";
		}
		for(int bintang=-1; bintang>=-baris; bintang--){
			cout<<"*";
		}
		cout<<endl;
	}
}
