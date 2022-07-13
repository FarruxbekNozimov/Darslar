#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int Z, c = 0, n, res;
    cin >> Z;
    if (Z == 0) return puts("-1"), 0;
    n = Z > 0 ? Z : -Z;
    for (int i = 1; 1LL * i * i <= n; i ++){
        if (n % i == 0){
            c ++;
            if (i * i != n) c ++;
        }
        if (c % 2 == 1 && Z > 0) res = c +1;
        else res = c;
        cout << res;
        return 0;
    }    
}
