#include <bits/stdc++.h>
using namespace std;

int main(){
	/**/
// note bahwa tanda (/) dalam penjelasan adalah pembagian
	// 24 / 1 = 24,habis. Maka 1 adalah faktor 24
	// 24 / 2 = 12,habis. Maka 2 adalah faktor 24
	// 24 / 3 = 8,habis. maka 3 adalah faktor 24
	// 24 / 4 = 6, habis. maka 4 adalah faktor 24
	// 24 / 5 = tidak habis. maka 5 BUKAN faktor 24
	// 24 / 6 = habis, maka 6 adalah faktor 24
	// .
	// .
	// .
	// .
	// 24 / 24 = 1, habis. maka 24 adlaah faktor24
  // iterasi dulu dari 1 sampai N untuk mengetahui faktor faktor N. Namun dalam kasus soal ini, iterasi mundur dari N sampai1

	int n;
	cin >> n;
	for(int i=n;i>=1;i--){
		if(n%i==0)cout << i << endl;
	}
}
