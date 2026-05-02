#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    for (long long i = 1; i<n; i+=1){
        if (n%i == 0){
            cout << i << endl;
        }
    }
    cout << n;
    return 0;
}
