#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1,x2,y1,y2,a,b;
	cin >> x1 >> y1 >> x2 >> y2;

	a = x1 - x2;
	if(a < 0){
		a = a * -1;
	}
	b = y1 - y2;
	if(b < 0){
		b = b * -1;
		// b yang baru = b yang lama dikali -1
	}
	cout << a + b << endl;

}
