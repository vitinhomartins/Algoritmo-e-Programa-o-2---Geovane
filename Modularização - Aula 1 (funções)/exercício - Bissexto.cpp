#include <iostream>
#include <cmath>

using namespace std;

bool bissexto(int a) {
    if(a % 4 == 0 && (a % 400 == 0 || a % 100 != 0)) {
        return true;
    } else {
        return false; 
    }
}

int main() {
    int a = 0;
    cin >> a;
    if(bissexto(a) == false) {
        cout << "O ano nao eh bissexto!" << endl;
    } else {
        cout << "O ano eh bissexto!" << endl;
    }
}