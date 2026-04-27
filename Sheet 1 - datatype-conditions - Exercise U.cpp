#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n;
    cin >> n;
    if (round(n) != n){
        cout << "float " << int(n) << " " << n - floor(n);
    }else if(round(n) == n){
        cout << "int " << int(n);
    }
    return 0;
}
