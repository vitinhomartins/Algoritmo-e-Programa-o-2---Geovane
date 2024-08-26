#include <iostream>

using namespace std;

void ParouNao(int a) {
    a % 2 == 0 ? cout << "Par" : cout << "Impar";
}

int main () {
    int numb = 0;
    cin >> numb;
    ParouNao(numb);       
    return 0;
}