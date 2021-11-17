#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int r1,k1,r2,k2;
    int rub,kop;
    
    cin>>r1>>k1;
    cin>>r2>>k2;

    rub = r2 - r1; // разница рублей
    kop = k2 - k1; // разница копеек
    
    if (kop < 0)
    {
        kop += 100;
        rub -= 1;
    }
    
    cout<<rub<<' '<<kop; 
}
