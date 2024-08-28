#include <iostream>
#include <climits>

using namespace std;

int menor = INT_MAX;

void menor_n(int a, int b);

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    menor_n(a, b);
    cout << menor << endl;
    return 0;
}

void menor_n(int a, int b) {
    if(a > b) {
        menor = b;
    } else {
        menor = a;
    }
}

// o código foi desenvolvido para utilizar a varíavel global para saída. E para o processamento foi-se utilizada varáiveis locais para ser as entradas.