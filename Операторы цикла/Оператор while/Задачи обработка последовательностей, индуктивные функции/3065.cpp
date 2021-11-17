#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, sum = 0;
    cin >> x;
    while (x)
    {
        sum += x;
        cin >> x;
    }
    cout << sum;
}
