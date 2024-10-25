#include <iostream>

using namespace std;

int digitos(int n) {
    if(n == 0) { 
        return 0;
    }
    return 1 + digitos(n / 10);
}

int main() {
    int a = 0;
    cin >> a; 
    cout << digitos(a) << endl;
    return 0;
}