#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
      int n;
      cin >> n;
      do
      {
        cout << n % 10;
        n /= 10;
      }
      while (n);
      return 0;
}
