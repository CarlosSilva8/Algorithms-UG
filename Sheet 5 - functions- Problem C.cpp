#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;


string binario(long long x){
    string binary = "";
        while (x != 0){
            long long r = x%2;
            if (r == 0){
                binary = "0" + binary;
            }else{
                binary = "1" + binary;
            }
            x = x/2;;
        }
        return binary;
}


string wonderful(long long y, string b){
        string palindromo = b;
        reverse(palindromo.begin(), palindromo.end());
        if (palindromo == b && y%2 !=0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    return "";
}


int main(){
    long long a;
    cin >> a;
    cout << wonderful(a, binario(a));

return 0;
}
