#include <iostream>
using namespace std;

int main(){
    int n;
    /*
    1 - Receber input de um número N (1<=N<=99) inteiro do usuário
    */
    cin >> n;
    /* Loop responsável por utilizar o input do usuário para definir
    a quantidade de linhas que serão printadas */
    for (int i = 1; i<=n; i+=1){ // i inicia em um, o loop se repetirá N vezes os passos abaixo
            // A primeira parte do for_loop_i é o for_loop_j
        for (int j = 1; j<=i; j+=1){
            cout << "*";
        }
        cout << endl;
    }
}
