#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	cout<<s<<endl;
	
	//ini buat mengabaikan char
	cin.ignore();
	cin.ignore();

	//supaya bisa baca satu baris penuh, pakai:
	string b;
	getline(cin,b);
	cout<<b<<endl;

	// mencari panjang string pakai <namastring>.length()
	for(int i=0; i<b.length(); i++){
		cout<<b[i]<<endl; 
	}

	// cari index substring : find(). ngeluarin index yg paling awal
	string c="abcdefabc";
	// cout<<c.find("abc")<<endl; // output 0
	
	//ambil substring : substr()
	cout<<c.substr(3,3)<<endl; //output def

	//menghapus substring, pakai .erase(i,n); i=index pertama, n = banyak karakter yg dihapus
	//c = "abcabc"
	c.erase(3,3);
	cout<<c<<endl;

	// balikin c = "abcdefabc"
	//disisipkan pakai insert(i,n); i=index, n = string yg akan disisipkan
	c.insert(3,"def");
	cout<<c<<endl;

	//operasi penempelan string
	string a = "Pak";
	string t = "Dengklek";
	string gabung = a + " " + t; //Pak Dengklek
	cout<<gabung<<endl;
}
