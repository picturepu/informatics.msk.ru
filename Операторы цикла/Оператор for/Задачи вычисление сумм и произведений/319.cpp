#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,n;
    double sum = 1 , an = 1;

    cin >> a >> n;
     
    for( int i = 1 ; i <= n ; i++)
    {
        an *= a;
        sum += an;
    }
    
    cout<<sum;


}
