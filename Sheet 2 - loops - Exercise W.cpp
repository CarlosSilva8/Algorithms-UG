#include <iostream>
using namespace std;

int main(){
    int n, o;
    /*
    1 - Receber input de um número N (1<=N<=99) inteiro do usuário
    */
    o = 0;
    cin >> n;
    /* Loop responsável por utilizar o input do usuário para definir
    a quantidade de linhas que serão printadas */
    for (int i = 1; i<=n; i+=1){ // i inicia em um, o loop se repetirá N vezes os passos abaixo
            // A primeira parte do for_loop_i é o for_loop_j
        for (int j = i; j<n; j+=1){ // j recebe o valor i da i-ésima repetição, repetindo n-i vezes enquanto j<=n
                    cout << " ";
        }
        for (int y=2;y<=i;y+=1){
            if (i > 1){
                cout << "*";
            }
        }
        for (int z=1;z<=i;z+=1){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i<=n; i+=1){ // i inicia em um, o loop se repetirá N vezes os passos abaixo
            // A primeira parte do for_loop_i é o for_loop_j
        for (int j = 2; j<=i; j+=1){ // j recebe o valor i da i-ésima repetição, repetindo n-i vezes enquanto j<=n
                   cout << " ";
        }
        for (int y=n;y>i;y-=1){
            cout << "*";
        }
        for (int z=i;z<=n;z+=1){
            cout << "*";
        }
        cout << endl;
    }

}
