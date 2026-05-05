#include <iostream>
using namespace std;

int main(){
    int t;
    long long n, potencia;
    cin >> t;
    for (int i=1; i<=t;i+=1){
        cin >> n;
        if (n < 10 && n>=0){
            cout << n;
        }else{
             potencia = 10;
            }
        while (potencia <= n * 10){
                if (potencia > 10){
                    cout << (n%potencia)/(potencia/10) << " ";
                }else if (potencia = 10){
                    cout << (n%potencia) << " ";
                }
                potencia *= 10;
            }
            cout << endl;
        }
        return 0;
}
