#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,minimum=100001,maksimum=-100001;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a;
		if(a < minimum) minimum = a;
		else if(a > maksimum) maksimum = a;
	}
	cout << maksimum << " " << minimum << endl;
}




