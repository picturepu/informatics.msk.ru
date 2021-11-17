#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    
    int sqrta = ceil(sqrt(a + 0.0));
    int sqrtb = sqrt(b);
    
    for (int i = sqrta; i <= sqrtb; i++)
        cout << i*i << " ";
}
