#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		if(i == 2){
			continue;
		}
		cout << i << endl;
	}
}
// i = 1
// 1 == 2 (false)
// cout 1

// i = 2
// 2 == 2 (true)
// kembali ke baris awal perulangan

// i = 3
// 3 == 2 (false)
// cout 3

// i = 4
// 4 == 2 (false)
// cout 4

// i = 5
// 5 == 2 (false)
// cout 5


/*
i = 1
1 ==5 ? (false)
cout 1

i = 2
2 == 5? (false)
cout 2

i = 3
3 == 5? (false)
cout 3

i = 4
4 == 5 ? (false)
cout 4

i = 5
5 == 5 ?(true)
hentikan perulangan
================================================
i = 5
5 == 7? (false)
cout 5

i = 6
6 == 7? (false)
cout 6

i = 7
7 == 7? (true)
hentikan perulangan

for(int i=1;i<=10;i++){
	// 	if(i == 5){
	// 		break;
	// 	}
	// 	cout << i << endl;
	// }
	// for(int i=5;i<=10;i++){
	// 	if(i == 7){
	// 		break;
	// 	}
	// 	cout << i << endl;
	// }


*/
