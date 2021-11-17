#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
      int x;
      cin >> x;
      int  sum_x = 0, sum_x2 = 0, n = 0;
      double s, res;
      if(x)
      {
        while (x)
        {
          sum_x += x;
          sum_x2 += x*x;
          n++;
          cin >> x;
        }
        s = (double)sum_x / n;
        if (n != 1)
        {
          res = sqrt((sum_x2 - 2 * s * sum_x + n * s * s) / (n - 1));
          printf("%0.11f", res);
        }
        else
          cout << 0;
      }
}
