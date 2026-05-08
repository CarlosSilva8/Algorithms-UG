#include <iostream>
using namespace std;

void wonderful(int x){
    if (x%2 != 0){
        int resto = x;
        while (resto >= 1){
            if (resto%2 == 1){
                resultado += 1;
            }
            resto /= 2;
        }
        int conversor = 0;
        for (int j=1; j<=resultado; j+=1){
            conversor = conversor * 2 + 1;
        }
        if (conversor == x){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }
}


int main(){
    int a;
    cin >> a;
    wonderful(a);

}
