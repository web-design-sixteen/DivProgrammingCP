#include<iostream>
using namespace std;
void tukar (int &x,int &y){
    int sementara;
    sementara=x;
    x=y;
    y=sementara;
}
 
int main(){
    int n;
    cin>>n;
    int baris1[20000],baris2[200000];
    for(int i=1; i <=n; i++){
        cin>>baris1[i];
    }
    for(int i=1; i <=n; i++){
        cin>>baris2[i];
    }
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        char a,b;
        int c,d;
        cin>>a>>c>>b>>d;
        if (a=='A'&&b=='A'){
            tukar (baris1[c],baris1[d]);
        } else if(a=='A' && b=='B'){
            tukar (baris1[c],baris2[d]);
        } else if(a=='B' && b=='A'){
            tukar (baris2[c],baris1[d]);
        } else if(a=='B' && b=='B'){
            tukar (baris2[c],baris2[d]);
        }
    }
    //"1 1\n"
    for(int i=1; i <=n; i++){
        if (i==n) cout <<baris1[i]<<endl;
        else cout <<baris1 [i]<<" ";
    }
    for(int i=1; i <=n; i++){
        if (i==n) cout <<baris2[i]<<endl;
        else cout <<baris2 [i]<<" ";
    }
    return 0;
}
