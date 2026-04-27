#include <iostream>
using namespace std;

int main(){
    int a, b,c, h, l;
    cin >> a >> b >> c;

    if (a >= b && b >= c){
        h = a;
        l = c;
    }else if(a >= c && c >= b){
        h = a;
        l = b;
    }else if (b >= a && a >= c){
        h = b;
        l = c;
    }else if (b >= c && c >= a){
        h = b;
        l = a;
    }else if (c >= a && a >= b){
        h = c;
        l = b;
    }else if (c >= b && b >= a){
        h = c;
        l = a;
    }
    cout << l << " " << h;
    return 0;
}
