#include <iostream>
using namespace std;

int main(){
    int n, c, m;
    cin >> n;
    c = 1;
    while(c <= 12){
        m = n*c;
        cout << n << " * " << c << " = " << m << endl;
        c += 1;
    }
    return 0;
}
