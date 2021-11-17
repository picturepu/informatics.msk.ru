#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int a,b,c;


int main()
{
    cin>>a>>b>>c;
     
    a=abs(a);
    b=abs(b);
    c=abs(c);
     
    if ((a%2 != b%2) || (a%2 != c%2))
        cout<<"YES";
    else
        cout<<"NO";
}
