#include <iostream>
using namespace std;

int main() {
    int a, b;
    float c, d;
    cin >> a >> b;
    c = a % b;
    d = b % a;
    if (c == 0 or d == 0){
        cout << "Multiples";
    } else{
        cout << "No Multiples";
    }
    return 0;
}
