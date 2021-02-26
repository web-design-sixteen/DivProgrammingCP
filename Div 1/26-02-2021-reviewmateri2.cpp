#include <bits/stdc++.h>
using namespace std;
/*
	subprogram :
	1. fungsi -> mengembalikan nilai
	2. prosedur -> tidak mengembalikan nilai
*/
//prosedur 
void halo(){ 
	//ngga pake parameter
	cout<<"halo";
}
//parameter lebih dari 1, tipe data sama semua
void nilai(int a,int b){ }
//parameter lebih dari 1, tipe data berbeda
void hai(int a,int b, double c, string d, char e){}
//parameter pass by reference -> bakal ngembaliin nilai ke variabel asal
void tukar(int &a,int &b){
	int sementara=a;
	a=b;
	b=sementara;
}

//fungsi
int kuadrat(int a){ 
	//parameter cuma 1
	return a*a;
}
string ha(string a){
	//a-> "bebek"
	return "bebek";
}
bool cek(int a,int b){
	//cek apakah a<b;
	if(a<b) return true;
	else return false;
}
bool cek1(int a,int b){return a<b;}
char hi(int k,char c){return 'a';}
long long kuadrat1(long long a){return a*a;}
int main(){
	int x=10,y=20;
	tukar(x,y); 
	/*
		x -> a, y->b
		a=10, b=20
		sementara = 10
		a=20
		b=10
		a=20, b=10
		a->x, b->y
		x=20, y=10
	*/
	char q=hi(1,'c'); //q='a'
	if(cek(x,y)) {
		cout << x<<"<"<<y<<endl;
	} else {
		cout << x << ">=" << y<<endl;
	}
}
