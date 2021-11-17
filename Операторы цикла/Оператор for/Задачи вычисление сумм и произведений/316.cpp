#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{   
    int n, i, res;
    cin >> n;
    res = 1;
    
    for (i = 1; i <= n; i++)
        res = res * i;
    cout << res;
}