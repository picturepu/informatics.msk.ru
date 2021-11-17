#include <iostream>
#include <iomanip>
using namespace std;
  
double fuct(int a){
    if (a == 1 || a == 0)
    return 1;
    else if (a == 2)
        return 2;
    else return a * fuct(a - 1);
}

int main() {
    int N;
    double i, sum = 1;
    cin >> N;
    
    if (N > 8)
        N = 8;
        
    for (i = 1; i <= N; i++)
        sum = sum + 1 / fuct(i);
        
    cout << fixed << setprecision(5) << sum;
}