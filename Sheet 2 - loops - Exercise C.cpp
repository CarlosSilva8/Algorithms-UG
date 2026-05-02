#include <iostream>
using namespace std;

int main(){
    int valores, c, numeros, par, impar, positive, negative;
    cin >> valores;
    c = 0;
    par = 0;
    impar = 0;
    negative = 0;
    positive = 0;
    while (c < valores){
        cin >> numeros;
        if (numeros % 2 == 0 && numeros > 0){
            par += 1;
            positive += 1;
        }else if (numeros%2 == 0 && numeros < 0){
            par += 1;
            negative += 1;
        }else if (numeros%2 != 0 && numeros > 0){
            positive += 1;
            impar += 1;
        }else if (numeros%2 != 0 && numeros < 0){
            negative += 1;
            impar +=1;
        }else if (numeros == 0){
            par += 1;
        }
        c += 1;
    }
    cout << "Even: " << par << endl << "Odd: " << impar << endl << "Positive: " << positive << endl;
    cout << "Negative: " << negative;
    return 0;
}
