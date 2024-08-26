#include <iostream>

using namespace std;

void multiplo() {
    int numb = 0;
    cin >> numb;
    if(numb % 4 == 0) {
        cout << "Eh multiplo!" << endl;
    } else {
        cout << "Nao eh multiplo!" << endl;
    }     
}

int main () {
    multiplo();
    return 0;
}