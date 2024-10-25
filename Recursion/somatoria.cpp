#include <iostream>

using namespace std;

int soma(int n) {
    int sum = 0;
    if(n == 0) {
        return sum+=0; 
    }
    return n + soma(n - 1);
}

int main() {
    int a = 0;
    cin >> a; 
    cout << soma(a) << endl;
    return 0;
}