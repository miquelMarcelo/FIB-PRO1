#include <iostream>
using namespace std;

void pintar(int n){
    if (n==1) cout << "*" << endl;
    else {
         pintar(n - 1);
        pintar(n - 1);
        for (int i = 0; i < n; ++i) cout << '*';
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pintar(n);

}
