#include <iostream>

using namespace std;

int main() {
    int *p = NULL, *q = NULL, a = 1, b = 2;
    p = &a;
    q = &b;
    p = p - q;
}

// retorna erro de compilação. 