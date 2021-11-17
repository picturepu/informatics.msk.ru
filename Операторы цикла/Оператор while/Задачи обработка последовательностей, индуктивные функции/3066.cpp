#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, sum = 0, length = 0;
    while (cin>>x && x)
    {
        sum += x;
        length++;
    }
    double rms = (double)sum / length;
    printf("%0.15f",rms);
}
