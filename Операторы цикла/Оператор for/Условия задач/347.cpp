#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    cin >> n;
    bool zeroExist = false;
    
    for (int i = 1; i <= n ; i++)
    {
        cin >> x;
        zeroExist = zeroExist | (x == 0);
        if (zeroExist)
          break;
    }
    cout<<(zeroExist ? "YES" : "NO");
}
