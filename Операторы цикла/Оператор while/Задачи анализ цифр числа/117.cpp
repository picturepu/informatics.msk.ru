#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
      string res = "";
      int n;
      cin>>n;
      while(n){
       n%2 ? res+='1' :res+='0';
       n/=2;
     }
      cout<<res;
}
