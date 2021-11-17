#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
   int n;
   cin >> n;
    
   int out[5] = {};
   out[4] = n / 60;
   n %= 60;
    
   if (n > 35)
        ++out[4];
   else{
    
    if (n >= 20){
        ++out[3];
        n -= 20;
    }
    
    if (n > 17)
        ++out[3];
    else{           
        if (n >= 10){
            ++out[2];
            n -= 10;
        }
        
        if (n > 8)
            ++out[2];
        else{               
            if (n >= 5){
                ++out[1];
                n -= 5;
            }
    
            out[0] = n;             
        }
    }   
    }   
    
   for (int i = 0; i < 5; ++i)
        cout << out[i] << ' ';
}