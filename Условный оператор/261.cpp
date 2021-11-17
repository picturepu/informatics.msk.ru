#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,c,d;

    cin>>a>>b;
    cin>>c>>d;

    if (a == 0 && b == 0)
        cout<<"INF";
    else
        if ( a == 0 || b%a != 0 || c*(-b/a)+d == 0)
            cout<<"NO";
        else
            cout<<-b/a;     
}
