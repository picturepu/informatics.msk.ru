#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    
    if (k <= m*n && (k%n==0 || k%m==0))
        cout<<"YES"; 
    else 
        cout<<"NO";
}
