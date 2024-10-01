#include <iostream>

using namespace std;

typedef struct {
    int real;
    int imaginario;
}imaginario;

int op_imaginario(imaginario *i, imaginario *j, imaginario *k, char op);

int main() {
    imaginario n[3]; char op;
    cout << "Digite o primeiro numero imaginario [parte real + parte imaginaria]: ";
    cin >> n[0].real >> n[0].imaginario;
    cout << "Digite o segundo numero imaginario [parte real + parte imaginaria]: ";
    cin >> n[1].real >> n[1].imaginario;
    cout << "Digite a operacao a ser realizada +/-: ";
    cin >> op;
    while(op_imaginario(&n[0], &n[1], &n[2], op) == 0) {
        cout << "Digite a operacao a ser realizada +/-: ";
        cin >> op;       
    }
    cout << n[2].real << " + " << n[2].imaginario << "i" << endl;
    return 0;
}

int op_imaginario(imaginario *i, imaginario *j, imaginario *k, char op) {
    switch(op) {
        case '+':
            cout << "Numero resultante da soma: " << endl;
            k->real = i->real + j->real;
            k->imaginario = i->imaginario + j->imaginario;
            break;
        case '-':
            cout << "Numero resultante da subtracao: " << endl;
            k->imaginario = i->imaginario - j->imaginario;
            k->real = i->real - j->real;
            break;
        default:
            return 0;
    }
    return 1;
}