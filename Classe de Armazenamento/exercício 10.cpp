#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 1, *p = &a, *q = &b;
    a > b ? (cout << "O endereco de A eh maior!" << endl) : (cout << "O endereco de B eh maior");
}