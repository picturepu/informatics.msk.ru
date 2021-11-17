#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
  cin >> n;
  int count = 0;
  while (n)
  {
    if (n % 10 == 0)
      count++;
    n /= 10;
  }
  cout << count; 
}
