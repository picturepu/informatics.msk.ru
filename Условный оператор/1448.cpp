#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int n;

int main()
{
    cin>>n;
    
    cout<<n<<" "<<"boch";
     
    if (n%10 == 0 || (n%10 >= 5 && n%10 <= 9) || (n%100 >= 11 && n%100 <= 14))
        cout<<"ek";
    else
        if(n%10 == 1)
          cout<<"ka";
        else
          cout<<"ki";
}
