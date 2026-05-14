#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int primo(int x){
    for (int i = 2; i<=x; i+=1){
        int c = 0;
        for (int j = 1; j<=x; j+=1){
            if(i%j == 0){
                c += 1;
            }
        }
        if (c <= 2){
            cout << i << " ";
        }else{
        continue;
        }
    }

}


int main(){
    int a;
    cin >> a;
    primo(a);
}
