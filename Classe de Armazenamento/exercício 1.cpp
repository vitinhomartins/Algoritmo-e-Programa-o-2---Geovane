#include <iostream>

using namespace std;

int main() {
    int *p = NULL, a = 0;
    p = &a;
    p++;
    cout << p << endl;
}

// o código está printando um lixo de memória. 

