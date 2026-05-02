#include <iostream>
using namespace std;

int main(){
    int l, n;
    long long f;
    f = 1;
    cin >> l;
    for (int i = 1; i <= l; i+=1){
        cin >> n;
        for (int j = 1; j <= n; j+=1){
            f *= j;
        }
    cout << f << endl;
    f = 1;
    }

}
