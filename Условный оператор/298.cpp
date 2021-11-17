#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int x1, x2, y1, y2, dx, dy;
    
    cin>>x1>>y1;
    cin>>x2>>y2;
    
    dx = x1 - x2;
    dy = y1 - y2;
    
    if (dx < 0) 
        dx = -dx;
    if (dy < 0) 
        dy = -dy;
 
    if (dx + dy == 1)
        cout<<"YES";
    
  else{
    if (dx + dy == 2 && dx == 1 && dy == 1)
        cout<<"YES";

    else
        cout<<"NO"; 
  }
}
