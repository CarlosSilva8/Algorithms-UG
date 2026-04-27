#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+' && c == (a + b)){
        cout << "Yes";
    }else if (s == '+' && c != (a + b)){
        cout << a + b;
    }else if (s == '-' && c == (a - b)){
        cout << "Yes";
    }else if (s == '-' && c != (a - b)){
        cout << a - b;
    }else if (s == '*' && c == (a * b)){
        cout << "Yes";
    }else if (s == '*' && c != (a * b)){
        cout << a * b;
    }
}
