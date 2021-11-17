#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
      int prv, cur, nxt;
      int count = 0;
      if (cin>>prv && prv)
      {
        if (cin >> cur && cur)
        {
          if (cin >> nxt)
          {
            while (nxt)
            {
              if ((prv < cur) && (cur > nxt))
                count++;
              prv = cur;
              cur = nxt;
              cin >> nxt;
            }
          }
        }
      }
      cout << count;
}
