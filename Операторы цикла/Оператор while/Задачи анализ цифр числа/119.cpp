#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool IsPalindrome (int cur)
{
      int base = cur;
      int rev = 0;
      while (cur)
      {
        rev = rev * 10 + cur % 10;
        cur /= 10;
      }
      if (base == rev)
        return true;
      else
        return false;
}
    
    
int main()
{    
     int n;
      cin >> n;
      int cur = 1, count = 0;
     
      while (cur <= n)
      {
        if (IsPalindrome (cur))
          count++;
        cur++;
        }
      cout << count;
}
