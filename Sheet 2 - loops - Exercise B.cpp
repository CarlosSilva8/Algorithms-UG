#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    for (long i = 1; i <= n; i++){
        if (i%2 == 0 && n >= 1){
            cout << i << endl;
        }
    }
    if (n == 0 || n == 1){
        cout << -1;
    }
    return 0;
}

