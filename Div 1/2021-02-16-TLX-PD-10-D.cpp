#include <bits/stdc++.h>
using namespace std;
int pangkat(int &a,int b){
	//a -> bilangannya
	//b -> pembaginya
	int banyak=0;
	while(a%b==0){
		banyak++;
		a/=b;
	}
	return banyak;
}
/*
	18
	pangkat(18,2)->1
	18 / 2 = 9
	supaya nilai n di program utama juga ikut 9, pakai parameter pass by reference untuk menyimpan nilai n nya
	n= 9
	pangkat(9,3)->2
	9/3=3
	3/3=1
*/
int main(){
	int n;
	cin>>n;
	int sementara=n;
	for(int i=2; i*i<=sementara; i++){
		if(n%i==0){
			int banyakPembagi=pangkat(n,i);
			if(banyakPembagi==1){
				cout<<i;
			} else {
				cout<<i<<"^"<<banyakPembagi;
			}
			if(n>1) cout<<" x ";
		}
	}
	if(n>1) cout<<n;
	cout<<endl;
}
