#include <iostream>
using namespace std;

int main(){
    float i;
    cin >> i;
    if (i < 0 or i > 100){
        cout << "Out of Intervals";
    }
    else if (i >=0 and i<=25 and i != 0){
        cout << "Interval [0,25]";
    }
    else if (i >25 and i<=50){
        cout << "Interval (25,50]";
    }
    else if (i >50 and i<=75){
        cout << "Interval (50,75]";
    }
    else if (i >75 and i<=100){
        cout << "Interval (75,100]";
    }
    return 0;
}
