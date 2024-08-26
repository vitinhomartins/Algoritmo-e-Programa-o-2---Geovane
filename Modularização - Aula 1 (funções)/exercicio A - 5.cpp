#include <iostream>

using namespace std;

void fatorial() {
    int numb = 0;
    cout << "Digite um numero para obter seu fatorial: ";
    cin >> numb; 
    while(numb <= 1) {
        cout << "Digite um numero valido para encontrar seu fatorial: ";
        cin >> numb;
    }
    int fat = numb;
    numb = 1;
    for(int a = fat; a > 0; a--) {
        numb = numb * a;
    }
    cout << "O fatorial e: " << numb << endl;
}

int main () {
    fatorial();    
    return 0;
}