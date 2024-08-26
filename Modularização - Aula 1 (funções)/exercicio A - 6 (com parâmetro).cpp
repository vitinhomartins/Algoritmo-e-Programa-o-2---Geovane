#include <iostream>

using namespace std;

int exp_conta(int base, int expoente) {
    int result = 1;
    while(base < 0 || expoente < 0) {
        return 0;        
    }
    while(expoente != 0) {
        result*= base;
        expoente--;
    }
    return result; 
}

int main () {
    int base = 0, expoente = 0;
    cout << "Insira os valores da base e do expoente, respectivamente: ";
    cin >> base >> expoente; 
    while(exp_conta(base, expoente) == 0) {
        cout << "Insira os valores da base e do expoente, respectivamente: ";
        cin >> base >> expoente;         
    }
    cout << "Resultado do fatorial: " << exp_conta(base, expoente) << endl;
    return 0;
}