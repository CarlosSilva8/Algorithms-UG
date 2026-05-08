#include <iostream>
using namespace std;

int round(float x, float y){
    float div = x/y;
    int check = (x/y) + 1;
    if (div + 0.5 >= check){
        cout << "floor "<< x << " / " << y << " = " << int(div) << endl;
        cout << "ceil "<< x << " / " << y << " = " << int(div) + 1 << endl;
        cout << "round "<< x << " / " << y << " = " << int(div) + 1;
    }else if((x / y) == 1){
        cout << "floor "<< x << " / " << y << " = " << int(div) << endl;
        cout << "ceil "<< x << " / " << y << " = " << int(div)<< endl;
        cout << "round "<< x << " / " << y << " = " << int(div);}

    else{
        cout << "floor "<< x << " / " << y << " = " << int(div) << endl;
        cout << "ceil "<< x << " / " << y << " = " << int(div) + 1 << endl;
        cout << "round "<< x << " / " << y << " = " << int(div);
    }
    return 0;
}

int main(){
    int a, b;
    cin >> a >> b;
    round(a, b);


}
