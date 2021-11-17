#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double i, sum = 0;
 
    for(i = 1 ; i <= n ; i++)
        sum += 1.0/(i*i);
    
    cout<<sum;
}
