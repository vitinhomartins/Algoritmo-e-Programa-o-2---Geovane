#include <iostream>

using namespace std;

int main() {
    int *p = NULL, a = 0;
    const int b = 4;
    p = &a;
    p-= b;
    cout << p << endl;
}

// o programa printou um lixo de memória.