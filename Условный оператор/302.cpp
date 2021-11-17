#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int a,b,c;

int main()
{
    cin>>a>>b>>c;
    if (b+c > a && c+a > b && b+a > c){
        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
            cout<<"right";
        
        else if(a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b)
            cout<<"obtuse";
            
        else
            cout<<"acute";
    }
    else cout<<"impossible";
}
