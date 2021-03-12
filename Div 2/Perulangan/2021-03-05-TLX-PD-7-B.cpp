// SOLUSI 1
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=n;i>0;i--){
		for(int j=1;j<=n;j++){
			if(j<i) cout << " ";
			else cout << "*";
		}
		
		cout << endl;
	}
	
}

// SOLUSI 2
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	for(int i=1;i<=n;i++){
		// perulagan untuk mengeluarkan spasi
		for(int j=1;j<=(n-i);j++){
			cout << " ";
		}
		// perulangan untuk mengeluarkan bintang
		for(int j=1;j<=i;j++){
			cout << "*";
		}
		cout << endl;
	}
}

// clue : nested loop (perulangan dalam perulangan)

// n = 5

//     *
//    **
//   ***
//  ****
// *****




