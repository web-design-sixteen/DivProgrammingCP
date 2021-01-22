#include <bits/stdc++.h>

using namespace std;

long long i;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    string a;
    int b=1;
    cin >> a;
    for (i = 0; i < a.length(); i++)
    {
        if (a[i]==a[i+1])
        {
            b++;
        }
        else if (a[i]!=a[i+1])
        {
            cout << b;
            cout << a[i];
            b=1;
        }
    }
    return 0;
}
