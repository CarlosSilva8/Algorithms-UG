#include <iostream>
#include <cmath>
using namespace std;

int add(int x, int y){
    return (x + y);
}

int main(){
    int a, b;
    cin >> a >> b;
    int soma = add(a,b);
    cout << soma;
    return 0;
}
