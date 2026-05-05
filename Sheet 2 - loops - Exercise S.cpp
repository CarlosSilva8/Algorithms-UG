#include <iostream>
using namespace std;

int main(){
    int t, x, y, soma;
    cin >> t;
    for (int i=1; i<=t; i+=1){
        cin >> x >> y;
        soma = 0;
        if (x >= y){
            for (int j=y;j<x;j+=1){
                if (j%2 != 0 && j>y){
                soma += j;
                }
            }
        }else if (y>=x){
            for (int z = x; z<y; z+=1){
                if (z%2 != 0 && z>x){
                soma += z;
                }
            }
        }
        cout << soma << endl;
    }
    return 0;
}
