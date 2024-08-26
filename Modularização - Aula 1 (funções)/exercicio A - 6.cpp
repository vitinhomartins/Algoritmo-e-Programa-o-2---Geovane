#include <iostream>

using namespace std;

void exp_conta() {
    int base = 0, expoente = 0, result = 1;
    cout << "Insira os valores da base e do expoente, respectivamente: ";
    cin >> base >> expoente; 
    while(base < 0 || expoente < 0) {
        cout << "Insira os valores da base e do expoente, respectivamente: ";
        cin >> base >> expoente;         
    }
    while(expoente != 0) {
        result*= base;
        expoente--;
    }
    cout << "Resultado: " << result << endl;
}

int main () {
    exp_conta();    
    return 0;
}