#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int d, m, y, age;
    cin >> age;
    y = age/365;
    m = (age - (y*365))/30;
    d = age - (m*30 + y*365);
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days";
    return 0;
}

