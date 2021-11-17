#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, i, n, s = 0;
    
    cin>>x;
    
    for (i = 1; i <= x; ++i)
    {
        cin>>n;
        s += n;
    }
    
    cout<<s;
}
