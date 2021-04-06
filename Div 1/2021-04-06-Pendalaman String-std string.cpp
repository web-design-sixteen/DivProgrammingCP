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

	// // mencari panjang string pakai <namastring>.length()
	// for(int i=0; i<b.length(); i++){
	// 	cout<<b[i]<<endl;
	// }

	// cari index substring : find(). ngeluarin index yg paling awal
	// string c="abcdefabc";
	// // cout<<c.find("abc")<<endl;
	
	// //ambil substring : substr()
	// cout<<c.substr(3,3)<<endl;

}
