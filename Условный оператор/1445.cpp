#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int m,n,x,y;

int main()
{
    cin>>m>>n>>x>>y;
     
    if (x!=1) 
        cout<<x-1<<" "<<y<<endl;
    
    if (x!=m) 
        cout<<x+1<<" "<<y<<endl;
        
    if (y!=1) 
        cout<<x<<" "<<y-1<<endl;
    
    if (y!=n) 
        cout<<x<<" "<<y+1;
}
