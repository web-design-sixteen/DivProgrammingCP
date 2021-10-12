#include <bits/stdc++.h>
using namespace std;

int main(){
	// kesimpulan : bilangan 2 pangkat jika dibagi 2 terus menerus sampai 1 akan selalu menghasilkan angka genap."
	int n;
	cin >> n;
	if(n == 1){
		cout << "ya" << endl;
	}
	else if(n % 2 == 1){
		cout <<"bukan" << endl;
	}
	else{
		while(n != 1 && n%2 == 0){
			n = n / 2;
			if(n == 1){
				cout << "ya" << endl;
			}
			else if(n % 2 == 1){
				cout << "bukan" << endl;
			}
		}
	}
}
