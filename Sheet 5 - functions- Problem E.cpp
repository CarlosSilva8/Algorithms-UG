#include <iostream>
using namespace std;


int swaper(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout << x << " " << y;
}


int main(){
    int a, b;
    cin >> a >> b;
    swaper(a,b);

}
