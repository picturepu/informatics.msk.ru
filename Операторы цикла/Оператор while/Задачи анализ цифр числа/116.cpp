#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int MinDigit (int n)
{
      int cur;
      int min_n = 9;
      while (n)
      {
        cur = n % 10;
        min_n = min(min_n,cur);
        n /= 10;
      }
      return min_n;
}

int MaxDigit (int n)
{
      int cur;
      int max_n = 0;
      while (n)
      {
        cur = n % 10;
        max_n = max(max_n,cur);
        n /= 10;
      }
      return max_n;
}

int main()
{
    int n;
    cin >> n;
    cout << MinDigit(n) << " " << MaxDigit(n);
}

