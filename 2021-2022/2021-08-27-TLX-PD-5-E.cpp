#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    //1-9
    if (N>0&&N<10)
    {
        cout << "satuan" << endl;
    }
    //10-99
    else if (N>9&&N<100)
    {
        cout << "puluhan" << endl;
    }
    //100-999
    else if (N>99&&N<1000)
    {
        cout << "ratusan" << endl;
    }
    //1000-9999
    else if (N>999&&N<10000)
    {
        cout << "ribuan" << endl;
    }
    else
    {
        cout << "puluhribuan" << endl;
    }
}
