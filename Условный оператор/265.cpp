#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,k,m;
    int res;
    
    cin>>k>>m>>n;
    
    if(n<k)
        res = 2 * m;
        
    else{
        res = 2 * n / k * m;
        if (2 * n % k !=0)
            res += m;
    } 
    
    cout<<res;
}
