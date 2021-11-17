#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    
    int result = 0;

    for(int i=str.size()-1, pos=0; i>=0; --i, ++pos)
        result += str[i] == '0'? 0 : 1 << pos;

    cout << result;
}
