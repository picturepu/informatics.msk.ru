#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int prv, cur;
    cin >> cur;
    int count = 0;
    while (cur)
    {
        prv = cur;
        cin >> cur; 
        if (cur > prv)
          count++;
    }
    cout << count;
}
