#include <bits/stdc++.h>
#include <iostream>
 
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //(*)(/)(%)(+)(-)
    //menghitung luas persegi
    int x,Luas;
    cin >> x;
    Luas = x * x;
    cout << Luas;
    //menghitung Luas Lingkaran
    int x,Luas;
    cin >> x;
    Luas = 22*x*x;
    Luas = Luas / 7;
    cout << Luas;
    //Andi punya permen sebanyak x.
    //hitunglah sisa permen setelah di bagikan ke 4 temannya
    int x,hasil;
    cin >> x;
    hasil = x%4;
    cout << hasil;
}
