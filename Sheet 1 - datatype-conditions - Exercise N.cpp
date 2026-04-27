#include <iostream>
using namespace std;

int main() {
    char a;
    int b, c, ascvalue;
    cin >> a;
    ascvalue = int(a);
    b = ascvalue + 32;
    c = ascvalue - 32;
    if (ascvalue >= 65 && ascvalue <= 90){
        cout << char(b);
    }
    else if (ascvalue >= 97 && ascvalue <= 123){
        cout << char(c);
    };
    return 0;
}

