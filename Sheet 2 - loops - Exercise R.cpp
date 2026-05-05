#include <iostream>
using namespace std;

int main(){
    int t, n, m, soma;
    do{
        cin >> n >> m;
        if (n <= 0 || m <= 0){
            break;
        }else if (n >= m){
            soma = 0;
            for (int j = m; j<=n; j+=1){
                soma += j;
                cout << j << " ";
            }
            cout << "sum =" << soma << endl;
        }else if (m >= n){
            soma = 0;
            for (int j = n; j<=m; j+=1){
                soma += j;
                cout << j << " ";
            }
            cout << "sum =" << soma << endl;
        }
    }while(n > 0 && m > 0);

    return 0;
}
