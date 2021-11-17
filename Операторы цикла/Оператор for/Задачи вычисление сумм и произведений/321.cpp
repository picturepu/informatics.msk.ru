#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 1.0;
 
    int sign = -1;
    for(int i = 1 ; i <= n ; i++) {
        sum += sign / ( 2.0 * i + 1 );
        sign = -sign;
    }

    cout<<4*sum;
}
