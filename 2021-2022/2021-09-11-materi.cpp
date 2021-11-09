#include <bits/stdc++.h>
using namespace std;

int main(){
	// jalankan perulangan yang ada di dalam dulu

	// setela perulangan yang ada di dalam selesai, mmulai iterasikan for yang ada di luar dan ulangi lagi for yang ada di dalam juga

	for(int i=1;i<=3;i++){
		for(int j=1;j<=5;j++){
			cout << "#";
		}
		cout << endl;
		
	}
	
// output
//   #####
//   #####
//   #####
  
  for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			for(int k=1;k<=4;k++){
				cout << "#";
			}
			cout << endl;
		}
	}
  // (cout "#" 4x) diulang 3x
	// cout endl
	// i menjadi 2
	// ############
	// ############
  
}
