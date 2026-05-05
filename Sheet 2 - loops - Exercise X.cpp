#include <iostream>
using namespace std;

int main(){
    long long t, resultado, resto, conversor;
    long long n;
    cin >> t;
    for (int i = 1;i<=t;i+=1){
        resultado = 0;
        cin >> n;
        resto = n;
        while (resto >= 1){
            if (resto%2 == 1){
                resultado += 1;
            }
            resto /= 2;
        }
        conversor = 0;
        for (int j=1; j<=resultado; j+=1){
            conversor = conversor * 2 + 1;
        }
        cout << conversor << endl;
    }
    return 0;
}
