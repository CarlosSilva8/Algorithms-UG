#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && b >= c && a >= c){
        cout << c << endl << b << endl << a << endl;
        cout << endl << a << endl << b << endl << c;
    }else if (a >= c && c >= b && a >=c){
        cout << b << endl << c << endl << a << endl;
        cout << endl << a << endl << b << endl << c;
    }else if(b >= a && a >= c && b >= c){
        cout << c << endl << a << endl << b << endl;
        cout << endl << a << endl << b << endl << c;
    }else if (b >= c && c >= a && b >= a){
        cout << a << endl << c << endl << b << endl;
        cout << endl << a << endl << b << endl << c;
    }else if (c >= a && a >= b && c >= b){
        cout << b << endl << a << endl << c << endl;
        cout << endl << a << endl << b << endl << c;
    }else if (c >= b && b >= a && c >= a){
        cout << a << endl << b << endl << c << endl;
        cout << endl << a << endl << b << endl << c;
    }

    return 0;
}
