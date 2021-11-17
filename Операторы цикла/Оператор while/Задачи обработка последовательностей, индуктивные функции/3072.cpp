#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
      int x, count = 0;
      cin >> x;
      int max = x;
      while (x)
      {
        if (x > max)
        {
          max = x;
          count = 1;
        }
        else
          if (x == max)
            count++;
        cin >> x;    
      }
      cout << count;
}
