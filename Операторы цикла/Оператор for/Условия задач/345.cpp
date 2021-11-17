#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, i, n;
    int k = 0;
    cin >> a;
    
    for(i = 1; i <= a; i++){
        cin >> n;
        if(n == 0) k++;
    }
    cout << k;
}
