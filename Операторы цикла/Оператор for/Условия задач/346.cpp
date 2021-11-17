#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, i, n;
    int kp = 0, km = 0, k = 0;
    cin >> a;
    
    for(i = 1; i <= a; i++){
        cin >> n;
        if(n == 0) k++;
        if(n > 0) kp++;
        if(n < 0) km++;
    }
    cout << k << ' ' << kp << ' ' << km;
}
