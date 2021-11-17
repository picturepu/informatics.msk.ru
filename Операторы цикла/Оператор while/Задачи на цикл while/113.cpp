#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int value = 1;
    int curSqr = value*value;
    while (curSqr<=n)
    {
        cout<<curSqr<<' ';
        value++;
        curSqr = value*value;
    }
}
