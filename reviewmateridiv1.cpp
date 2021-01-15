#include <bits/stdc++.h>
using namespace std;
int aaaa[1000000];
//prosedur (void)
void cetak(){ //gapake parameter
	cout<<"hai";
}
void pakeparameter(int a){
	cout<<a<<endl;
}
void parameterbanyak(int a,char c){
	cout<<a<<" "<<c;

}
//fungsi (sesuai tipe data)
string ganti(string s){
	return s+"Halo";
}
int tambah(int a,int b){
	return a+b;
}
int gatau(int a, bool c){
	return a;
}
bool benernggaya(int a,int b){ //ngecek a<b
	if(a<b) return true;
	else return false;
}
int main(){
	//mengeluarkan : cout/
	cout<<"halo\n";
	//mendapatkan input : cin
	int a;
	cin>>a;
	/* tipe data:
		bil bulat = int, long long, dll
		bil real = double, float
		kalimat = string
		benar/salah = bool
		karakter = char
	*/
	int b;
	long long c;
	double d;
	float e;
	string f;
	char g;
	bool h;

	 /*operasi bool:
		- and (&&) : 
		A B A&&B
		T T  T
		T F  F
		F T  F
		F F  F 
		- or (||) : 
		A B A||B
		T T  T
		T F  T
		F T  T
		F F  F
		- xor (^) : 
		misal butuh 1 tempat pensil, 
		trs mau beli :
			-ada tempat pensil A, 
			- ada tempat pensil B
		1. kalau beli tempat pensil A sm B (A = true; B = true), sekarang kita punya 2 tempat pensil, padahal kita butuhnya 1 tempat pensil, jadinya A^B = T^T = F 
		2. kalau beli tempat pensil A aja (A = true; B = false), sekarang kita punya 1 tempat pensil, jadinya A^B = T^F = T 
		3. kalau beli tempat pensil B aja (A = false; B = true), sekarang kita punya 1 tempat pensil, jadinya A^B = F^T = T 
		4. kalau nggak beli tempat pensil A maupun B (A = false; B = false), sekarang kita nggak punya tempat pensil, padahal kita butuhnya 1 tempat pensil, jadinya A^B = F^F = F

		kalau xor, salah satu nilainya true, hasilnya true

		A B A^B
		T T  F
		T F  T
		F T  T
		F F  F
		- not percabangan(!), operasi bilagan (~) :
		A = aku makan nasi
		!A = aku nggak makan nasi 
		A !A
		T F
		F T*/
	

	//percabangan:
		//if
		if(h) {
			// jalan
		}
		//if-else
		if(h){
			//jalan disini
		} else{
			//jalan di bagian ini
		}
		//if-else-if : if then multi
		if(h){
			//jalan lewat sini
		} else if (1<2){
			//jalan kesini
		}

		bool i;

		//and
		if(h && i){ //h sama i true, ada apel
			cout<<"apel";
		}
		//or
		if(h || i){ //h sm i false, nggak ada bebek
			cout<<"bebek";
		}
		//xor
		if(h^i){ //h / i true, ada nanas
			cout<<"nanas";
		}
		//not
		if(!h){ // h false, ada hehe
			cout<<"hehe";
		}
	//perulangan:
		//for
		for(int i=0; i<1000; i++){
			cout<<i<<endl;
		}
		for(int i=6; i<1000; i+=5){
			cout<<i<<endl;
		}
		for(int i=0; i*i<1000; i++){
			cout<<i<<endl;
		}
		//while
		int A=0,B=10;
		while(A<B){
			cout<<"halo";
			A+=6;
		}
		//do-while
		do{
			cout<<"youtube";
		} while(A<=1);
		/*
			do-while: jalan dulu baru cek
			while : cek dulu baru jalan
		*/
		//break : keluar dari perulangan yg lg jalan
		for (int k = 0; k < 10; k++){
			for (int j = 0; j < 11; j++){
				if(j==5){
					break;
				}
				if (j==3) {
					continue;
				}
				cout<<j<<" ";
			}
			cout<<endl;
		}

	//array 
		//1 dimensi
		int aa[11]; //11 menyatakan ukurannya
		//ukurannya 0-10

		//2 dimensi
		int v[100][100]; //v[i][j];
		  /*0 1 2 3 4 5 6 -> kolom j
		  0 
		  1
		  2
		  3
		  4
		  5
		  6
		  |
		  barisnya i*/
		  
		//multi dimensi 
		int aaa[8][8][8][8][8];
		//saran: inisialisasi array diluar int main()
	cetak();
	pakeparameter(5);
	cout<<tambah(90,100)<<endl;//output 190
	cout<<ganti("hehe")<<endl; //output : heheHalo
	if(benernggaya(3,9)){
		cout<<"betul";
	} else {
		cout<<"salahh";
	}
}
