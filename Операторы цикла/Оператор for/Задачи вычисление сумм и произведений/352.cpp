#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    const int count = 2;
    int n, rez = 1;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        rez *= count;
    cout << rez;
}