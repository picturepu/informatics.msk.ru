#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, s = 0;
    
    for (i = 1; i <= 100; ++i)
    {
        cin>>n;
        s += n;
    }
    cout<<s;
}
