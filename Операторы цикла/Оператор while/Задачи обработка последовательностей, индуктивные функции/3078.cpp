#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
      int prv, cur;
      cin >> prv;
      if (prv)
      {
        cin >> cur;
        int count = 1, count_max = 1;
        int sgn_prv = cur - prv, sgn_cur;
     
        while (cur)
        {
          sgn_cur = cur - prv;
          if (sgn_prv * sgn_cur > 0)
            count++;
          else
            if (sgn_prv * sgn_cur == 0)
              count = 1;
            else
              count = 2;
          count_max = max(count_max, count);
          sgn_prv = sgn_cur;
          prv = cur;
          cin >> cur;
        }
        cout << count_max;
      }
      else
        cout << 0;
}
