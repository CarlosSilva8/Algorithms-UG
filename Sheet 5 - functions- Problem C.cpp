#include <iostream>
using namespace std;


long long binario(long long x){
long long resultado = 0;
        long long resto = x;
        while (resto >= 1){
            if (resto%2 == 1){
                resultado += 1;
            }
            resto /= 2;
        }
        long long conversor = 0;
        for (long long j=1; j<=resultado; j+=1){
            conversor = conversor * 2 + 1;
        }
        return conversor;
}


void wonderful(long long y, long long conversor2){
    if (y%2 != 0){
        if (conversor2 == y && conversor2%2 != 0){
            cout << "YES";
        }else if (conversor2 != y){
            cout << "NO";
        }
    }else if (y%2 == 0){
       cout << "NO";
    }
}


int main(){
    long long a;
    cin >> a;
    if (a%2 != 0){
    long long k = binario(a);
    wonderful(a, k);
    }else{
        cout << "NO";
    }


return 0;
}
