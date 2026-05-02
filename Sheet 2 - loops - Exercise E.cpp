#include <iostream>
using namespace std;

int main(){
    long n, x, c;
    cin >> n;
    c = 0;
    for (int i = 1; i <= n; i+=1){
        cin >> x;
        if (x > c){
            c = x;
        }
    }
    cout << c;

    return 0;
}
