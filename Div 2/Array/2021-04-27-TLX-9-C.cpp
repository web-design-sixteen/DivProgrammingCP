#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,arr[100000],count[100000] = {0},maks=0,ind;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		count[arr[i]] += 1;
		
	}
	for(int i=1000;i>0;i--){
		if(count[i] > maks){
			maks = count[i];
			ind = i;
		}
	}
	cout << ind << endl;
	
}

