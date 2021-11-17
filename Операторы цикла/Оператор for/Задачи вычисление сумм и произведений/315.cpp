#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    int i, n, result = 0;
 
    cin >> n;
    for (i = 1; i <= n; i++)
        result = result + pow(i, 2);
    cout << result;
}