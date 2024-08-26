#include <iostream>

using namespace std;

void ParouNao() {
    int numb = 0;
    cin >> numb;
    numb % 2 == 0 ? cout << "Par" : cout << "Impar";
}

int main () {
    ParouNao();       
    return 0;
}