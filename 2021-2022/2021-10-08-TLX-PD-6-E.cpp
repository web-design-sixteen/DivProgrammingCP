#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
		selama n habis dibagi 2
			n = n/2

		kalau n == 1
			ya
		kalau bukan
			bukan
	*/
	int n;
	cin >> n;
	while(n == 2*(n/2)){ //n % 2 == 0
		n = (n/2);
	}
	if(n == 1 /*1 = 2^0*/ ){
		cout << "ya" << endl;
	} else if(n != 1){
		cout << "bukan" << endl;
	}
}
