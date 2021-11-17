#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int x1, y1, x2, y2, dx, dy;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    dx = x1 - x2;
    dy = y1 - y2;
  
    if (dx < 0)
        dx = -dx;

    if (dy < 0)
        dy = -dy;

    if (dx == dy)
        cout << "YES";
    else
        cout << "NO";


}
