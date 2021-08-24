#include <bits/stdc++.h>
using namespace std;

int main(){
	//tipe data boolean (bool) : true, false
	// operasi logika : and (dan), or (atau)
	// true AND true = true
	// true AND false = false
	// false AND true = false
	// false AND false = false

	// operasi logika AND (&&) akan memberikan nilai TRUE
	// jika kedua statement TRUE

	// operasi logika OR (||) akan memberikan nilai TRUE
	// jika salah satu atau kedua statement TRUE

	// true OR false = true
	// true OR true = true
	// false OR false = false
	// false OR true = true
	 
	// jika pernyatan di dalam kurung itu benar, maka jalankah perintah
	// yang ada di dalam kurung kurawa
	int nilai;
	cin >> nilai;


	// mengecek suatu nilai apakah di antara 0 - 75 :
	// kita mengecek apakah nilai >= 0
	// kita mengecek apakah nilai <= 75

	// percabangan pertama
	if(nilai >= 0 && nilai <= 75){
		cout << "C" << endl;
	}
	// percabangan kedua
	// jika percabangan pertama gagal, coba cek di sini
	else if(nilai >= 76 && nilai <= 88){
		cout << "B" << endl;
	}
	// percabangan ketiga
	// jika percabangan kedua gagal, coba cek di sini
	else if(nilai >= 89 && nilai <= 100){
		cout << "A" << endl;
	}

	// percabangan keempat
	// jika percabangan di atas semuanya gagal, langsung eksekusi program di bawah ini
	else{
		cout << "Tidak validd" << endl;
	}
}
