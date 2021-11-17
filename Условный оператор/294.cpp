#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a,b,c;

int main()
{
    cin>>a>>b>>c;
    
    if(max(a, b) == a && max(a,c) == a){
        cout<<a;
    }
    
    else if(max(a, b) == b && max(b,c) == b){
        cout<<b;
    }
    
    else if(max(a, c) == c && max(b,c) == c){
        cout<<c;
    }
    else{
        cout<<0;
    }
    return 0;
}
