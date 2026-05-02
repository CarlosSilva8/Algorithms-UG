#include <iostream>
using namespace std;

int main(){
    int psswrd;
    while (psswrd != 1999){
        cin >> psswrd;
        if (psswrd != 1999){
         cout << "Wrong" << endl;
         continue;
        }
    }
    cout << "Correct";
    return 0;
}
