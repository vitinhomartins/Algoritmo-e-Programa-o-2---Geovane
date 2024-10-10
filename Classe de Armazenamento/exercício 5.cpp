#include <iostream>

using namespace std;

int main() {
    int *p = NULL, *q = NULL, a = 5;
    p = &a;
    q = &a;
    if(!(p == q)) { cout << "nao iguais" << endl; }
}
// quando os ponteiros estão apontando para a mesma variável, eles são iguais. Portanto, o código não retornou cOut.