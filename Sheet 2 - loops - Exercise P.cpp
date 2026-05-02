#include <iostream>
using namespace std;

int main(){
    int n, h, j;
    cin >> n;
    h = n;
    j = 1;
    for (int i = 1; i<=n; i+=1){
        do{
            cout << "*";
            j +=1;
        }
        while (j <= n - i + 1);
        cout << endl;
    }
}

