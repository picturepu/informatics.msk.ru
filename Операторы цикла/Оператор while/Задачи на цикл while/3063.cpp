#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,p,y;
    int years = 0;
    cin>>x>>p>>y;
    while (x<y) {
        x *= (1 + p/100.0);
        x *= 100;
        x = (int) x;
        x /= 100;
        years++;
    }
    cout<<years;
}
