#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    int n, nf = 1;
    cin >> n;
    for(int i = 2 ; i <= n ; i++)
        nf *= i;
    cout << nf;
}