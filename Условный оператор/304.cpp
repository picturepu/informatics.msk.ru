#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int a,b,c,n;

int main()
{
    cin >> n;
    c = n/60;
    n %= 60;
    a = n%10;
    b = n/10;
    
    if(a*15 > 125){
        a = 0;
        b += 1;
    }
    
    if(a*15 + b*125 > 440){
        a = 0;
        b = 0;
        c +=1;
    }
    cout<<a<<" "<<b<<" "<<c;
}
