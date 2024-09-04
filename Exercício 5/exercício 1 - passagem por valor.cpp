#include <iostream>

using namespace std;

void resultado(int a, int b);

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    resultado(a, b);
    return 0;
}

void resultado(int a, int b) {
    a = a + b;
    cout << a << endl;
}