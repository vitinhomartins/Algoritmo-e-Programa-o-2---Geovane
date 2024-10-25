#include <iostream>
using namespace std;

int soma(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return n + soma(n - 2); 
    } else {
        return soma(n - 1);
    }
}

int main() {
    int a = 0;
    cin >> a; 
    cout << soma(a) << endl;
    return 0;
}
