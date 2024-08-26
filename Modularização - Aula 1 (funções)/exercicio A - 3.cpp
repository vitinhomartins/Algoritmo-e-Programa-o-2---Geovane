#include <iostream>

using namespace std;

void borala() {
    int numb1 = 0, numb2 = 0, soma = 0;
    cout << "Insira dois valores inteiros e positivos!" << endl;
    cin >> numb1 >> numb2;
    while(numb1 <= 0 && numb2 <= 0) {
        cout << "Informe valores validos!" << endl;
        cin >> numb1 >> numb2;
    }
    for(int i = numb1; i <= numb2; i++) {
        soma+= i;
    }
    cout << soma << endl;
}

int main () {
    borala();
    return 0;
}