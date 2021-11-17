#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    double n,k,res;
    cin>>n>>k;
    res = 1;
    
    for (int i=1;i<=k;i++)
    {
        res *= (n-k+i);
        res /= i;
    }
    
    cout<<res; 
}