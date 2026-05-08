#include <iostream>
using namespace std;

int divi(int x, int y){
    int k;
    if (x >= y){
        for (int i=1; i<=y; i+=1){
            if (x%i == 0 && y%i == 0){
                k = i;
            }else if (x%i != 0 && y%i == 0 || x%i == 0 && y%i != 0 || x%i != 0 && y%i != 0){
                continue;
            }
        }
    }
    else if (y>x){
        for (int i=1; i<=x; i+=1){
            if (x%i == 0 && y%i == 0){
                k = i;
            }else if (x%i != 0 && y%i == 0 || x%i == 0 && y%i != 0 || x%i != 0 && y%i != 0){
                continue;
            }
        }
    }
    return k;
}



int main(){
    int a, b;
    cin >> a >> b;
    int t = divi(a, b);
    cout << t;
}
