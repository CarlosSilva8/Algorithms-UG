#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    int ascvalue = int(a);
    if (ascvalue >= 0 && ascvalue <= 57){
        cout << "IS DIGIT";
    }
    else if (ascvalue >= 65 && ascvalue <= 90){
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else if (ascvalue >= 97 && ascvalue <= 123){
        cout << "ALPHA" << endl << "IS SMALL";
    };
    return 0;
}
