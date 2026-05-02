#include <iostream>
using namespace std;

int main(){
    int n, c;
    c = 0;
    cin >> n;
    for (int i = 1; i < n; i += 1){
        if (n <= 1){
            cout << "NO";
        }else if(n % i == 0){
        c += 1;
        }
    }
    if (c >= 2){
        cout << "NO";
        }else{
        cout << "YES";
        }
    return 0;
}
