/*457 -> 754

ret = 0

457 % 10 = 7
ret = 10*0 + 7 = 7

457 / 10 = 45

45 %10 = 5
ret = 7*10 + 5 = 75

45 / 10 = 4

4 % 10 = 4
ret = 75 * 10 + 4 = 754

4 / 10 = 0

457 -> 754*/
#include <bits/stdc++.h>
using namespace std;
// subprogram fungsi
int balik(int a){
	int temp=a;
	int hasil=0;
	while(temp>0){
		hasil=(hasil*10)+(temp%10);
		temp/=10;
	}
	return hasil;
}
//void, parameter pass by reference (&)
void balik2(int &t){
	int temp=t;
	int hasil=0;
	while(temp>0){
		hasil=(10*hasil)+(temp%10);
		temp/=10;
	}
	t=hasil;
}
int main(){
	int a,b;
	cin>>a>>b;
	//pakai subprogram fungsi
	cout<<balik(balik(a)+balik(b))<<endl;
	//pakai subrogram void
	balik2(a);
	balik2(b);
	a+=b;
	balik2(a);
	cout<<a<<endl;
}
