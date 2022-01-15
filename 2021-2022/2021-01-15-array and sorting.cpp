#include <bits/stdc++.h>
using namespace std;



int main(){
//in general, syntaxnya sort itu sort(index terkecil, indeks terbesar+1)

// jadi range yg disort itu dari index terkecil<= index skrg < index terbesar

// in general kalau di array, dia ini kerjanya kayak pointer gitu
// inilah kenapa ada pakai <nama array> sebagai batasannya
// kalau mau sort di tengah tengah jg bisa
// bedanya indeks terkecil sama indeks terbesarnya dirubah
// misal mau sort dari indeks 2 sampai 5
// nama arraynya arr
// berarti, sortnya dari sort(arr+2 karena mulai dari indeks 2
// dan berakhir di arr+5+1 karena berakhir di indeks ke 5
// jadi kodingan buat sort dari indeks 2 sampai 5 itu sort(arr+2,arr+5+1)


     int n,a[100];
     cin >> n;

     // 0 based
     // for(int i=0;i<n;i++){
     //      cin >> a[i];
     // }
      // sort(a,a+n);


     // one based
     for(int i=1;i<=n;i++){
          cin >> a[i];
     }
     
     sort(a+2, a+4+2);
     
     // descending order (terbesar ke terkecil)
     // sort(a+1, a+n+1, greater<int>());

     for(int i=1;i<=n;i++){
          cout << a[i] << endl;
     }

     
}
