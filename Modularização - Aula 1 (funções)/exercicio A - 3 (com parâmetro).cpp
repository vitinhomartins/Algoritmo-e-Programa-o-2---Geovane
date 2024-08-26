#include <iostream>

using namespace std;

int borala(int a, int b) {
    int soma = 0;
    if(a <= 0 && b <= 0) {
        return 0;
    }
    for(int i = a; i <= b; i++) {
        soma+= i;
    }
    return soma;
}

int main () {
    int numb1 = 0, numb2 = 0;
    cout << "Insira dois valores inteiros e positivos!" << endl;
    cin >> numb1 >> numb2;
    while(borala(numb1, numb1) == 0) {
        cout << "Insira dois valores inteiros e positivos!" << endl;
        cin >> numb1 >> numb2;        
    }
    cout << borala(numb1, numb2) << endl;
    return 0;
}